PROGRAM program0
  VAR
    sensor AT %IW0 : UINT;
  END_VAR
  VAR
    tope_normal : UINT := 34500;
    tope_alto : UINT := 36800;
    tope_superior : UINT := 38400;
    minimo_alto : UINT := 34501;
    minimo_superior : UINT := 36801;
    acumulador : UDINT := 38000;
  END_VAR
  VAR CONSTANT
    acumulador_prueba : UDINT := 35000;
    acumulador_prueba2 : UDINT := 36900;
  END_VAR
  VAR
    timer : BOOL := 1;
    verificar : BOOL := 0;
    timer_corrido : BOOL := 0;
    probar : BOOL := 0;
    acumular : BOOL := 0;
    entro : BOOL := 0;
    luz1 : BOOL := 0;
    luz2 : BOOL := 0;
    TP0 : TP;
    TOF1 : TOF;
    TP3 : TP;
    CTU_LINT0 : CTU_LINT;
    TP1 : TP;
    TOF0 : TOF;
    TOF2 : TOF;
    _TMP_UINT_TO_UDINT81_ENO : BOOL;
    _TMP_UINT_TO_UDINT81_OUT : UDINT;
    _TMP_ADD78_ENO : BOOL;
    _TMP_ADD78_OUT : UDINT;
    R_TRIG1 : R_TRIG;
    _TMP_DIV87_ENO : BOOL;
    _TMP_DIV87_OUT : UDINT;
    _TMP_UINT_TO_UDINT8_ENO : BOOL;
    _TMP_UINT_TO_UDINT8_OUT : UDINT;
    _TMP_GE93_ENO : BOOL;
    _TMP_GE93_OUT : BOOL;
    _TMP_UINT_TO_UDINT9_ENO : BOOL;
    _TMP_UINT_TO_UDINT9_OUT : UDINT;
    _TMP_LT100_ENO : BOOL;
    _TMP_LT100_OUT : BOOL;
    _TMP_UINT_TO_UDINT12_ENO : BOOL;
    _TMP_UINT_TO_UDINT12_OUT : UDINT;
    _TMP_GE104_ENO : BOOL;
    _TMP_GE104_OUT : BOOL;
    _TMP_AND127_ENO : BOOL;
    _TMP_AND127_OUT : BOOL;
    _TMP_OR129_ENO : BOOL;
    _TMP_OR129_OUT : BOOL;
  END_VAR

  probar := timer;
  TP0(IN := NOT(timer_corrido) AND probar, PT := T#350ms);
  acumular := TP0.Q;
  TOF1(IN := acumular, PT := T#150ms);
  timer_corrido := TOF1.Q;
  TP3(IN := acumular, PT := T#75ms);
  _TMP_UINT_TO_UDINT81_OUT := UINT_TO_UDINT(EN := TP3.Q, IN := sensor, ENO => _TMP_UINT_TO_UDINT81_ENO);
  _TMP_ADD78_OUT := ADD(EN := TP3.Q, IN1 := acumulador, IN2 := _TMP_UINT_TO_UDINT81_OUT, ENO => _TMP_ADD78_ENO);
  IF _TMP_ADD78_ENO THEN
      acumulador := _TMP_ADD78_OUT;
  END_IF;
  R_TRIG1(CLK := _TMP_ADD78_ENO);
  CTU_LINT0(CU := R_TRIG1.Q, R := _TMP_DIV87_ENO, PV := 7);
  _TMP_DIV87_OUT := DIV(EN := CTU_LINT0.Q, IN1 := acumulador, IN2 := 7, ENO => _TMP_DIV87_ENO);
  IF _TMP_DIV87_ENO THEN
      acumulador := _TMP_DIV87_OUT;
  END_IF;
  timer := NOT(verificar);
  TP1(IN := _TMP_DIV87_ENO, PT := T#2s);
  verificar := TP1.Q;
  _TMP_UINT_TO_UDINT8_OUT := UINT_TO_UDINT(EN := verificar, IN := tope_normal, ENO => _TMP_UINT_TO_UDINT8_ENO);
  _TMP_GE93_OUT := GE(EN := verificar, IN1 := acumulador_prueba, IN2 := _TMP_UINT_TO_UDINT8_OUT, ENO => _TMP_GE93_ENO);
  _TMP_UINT_TO_UDINT9_OUT := UINT_TO_UDINT(EN := _TMP_GE93_OUT, IN := minimo_superior, ENO => _TMP_UINT_TO_UDINT9_ENO);
  _TMP_LT100_OUT := LT(EN := _TMP_GE93_OUT, IN1 := acumulador_prueba, IN2 := _TMP_UINT_TO_UDINT9_OUT, ENO => _TMP_LT100_ENO);
  _TMP_UINT_TO_UDINT12_OUT := UINT_TO_UDINT(EN := _TMP_LT100_OUT, IN := tope_alto, ENO => _TMP_UINT_TO_UDINT12_ENO);
  _TMP_GE104_OUT := GE(EN := _TMP_LT100_OUT, IN1 := acumulador_prueba2, IN2 := _TMP_UINT_TO_UDINT12_OUT, ENO => _TMP_GE104_ENO);
  _TMP_AND127_OUT := AND(EN := _TMP_GE104_ENO, IN1 := _TMP_LT100_OUT, IN2 := _TMP_GE104_OUT, ENO => _TMP_AND127_ENO);
  TOF0(IN := _TMP_AND127_OUT, PT := T#3280ms);
  luz2 := TOF0.Q;
  luz1 := TOF0.Q;
  _TMP_OR129_OUT := OR(EN := _TMP_GE104_ENO, IN1 := _TMP_LT100_OUT, IN2 := _TMP_GE104_OUT, ENO => _TMP_OR129_ENO);
  TOF2(IN := _TMP_OR129_OUT, PT := T#3280ms);
  luz1 := TOF2.Q;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
