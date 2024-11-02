PROGRAM program0
  VAR
    sensor AT %IW0 : UINT;
  END_VAR
  VAR
    tope_alto : UINT := 43000;
    minimo_alto : UINT := 41900;
    minimo_superior : UINT := 43001;
    acumulador : UDINT := 0;
    acumulador0 : UDINT := 38000;
    timer : BOOL := 1;
    timer2 : BOOL := 1;
    normal : BOOL := 1;
    alto : BOOL := 0;
    superior : BOOL := 0;
    verificar : BOOL := 0;
    compara : BOOL := 0;
    divide : BOOL := 0;
    timer_corrido : BOOL := 0;
    probar : BOOL := 0;
    acumular : BOOL := 0;
  END_VAR
  VAR
    luz1 AT %QX0.0 : BOOL := 0;
    luz2 AT %QX0.1 : BOOL := 0;
    prueb AT %QX0.2 : BOOL := 0;
    prueb0 AT %QX0.3 : BOOL := 0;
  END_VAR
  VAR
    TP0 : TP;
    TOF1 : TOF;
    TP3 : TP;
    CTU_LINT0 : CTU_LINT;
    TP1 : TP;
    TOF0 : TOF;
    TOF2 : TOF;
    TOF3 : TOF;
    TON2 : TON;
    TON0 : TON;
    TON1 : TON;
    TON3 : TON;
    TON4 : TON;
    TP2 : TP;
    TON5 : TON;
    _TMP_UINT_TO_UDINT81_ENO : BOOL;
    _TMP_UINT_TO_UDINT81_OUT : UDINT;
    _TMP_ADD78_ENO : BOOL;
    _TMP_ADD78_OUT : UDINT;
    R_TRIG1 : R_TRIG;
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
    _TMP_UINT_TO_UDINT19_ENO : BOOL;
    _TMP_UINT_TO_UDINT19_OUT : UDINT;
    _TMP_LT17_ENO : BOOL;
    _TMP_LT17_OUT : BOOL;
    _TMP_MOVE21_ENO : BOOL;
    _TMP_MOVE21_OUT : UDINT;
    _TMP_MOVE24_ENO : BOOL;
    _TMP_MOVE24_OUT : UDINT;
    _TMP_MOVE37_ENO : BOOL;
    _TMP_MOVE37_OUT : UDINT;
    _TMP_GE166_ENO : BOOL;
    _TMP_GE166_OUT : BOOL;
    _TMP_DIV39_ENO : BOOL;
    _TMP_DIV39_OUT : UDINT;
  END_VAR

  probar := timer;
  TP0(IN := NOT(timer_corrido) AND probar, PT := T#350ms);
  acumular := TP0.Q;
  TOF1(IN := acumular AND NOT(verificar), PT := T#150ms);
  timer_corrido := TOF1.Q;
  TP3(IN := acumular AND NOT(verificar), PT := T#10ms);
  _TMP_UINT_TO_UDINT81_OUT := UINT_TO_UDINT(EN := TP3.Q, IN := sensor, ENO => _TMP_UINT_TO_UDINT81_ENO);
  _TMP_ADD78_OUT := ADD(EN := TP3.Q, IN1 := acumulador, IN2 := _TMP_UINT_TO_UDINT81_OUT, ENO => _TMP_ADD78_ENO);
  IF _TMP_ADD78_ENO THEN
      acumulador := _TMP_ADD78_OUT;
  END_IF;
  TON4(IN := verificar, PT := T#530ms);
  timer := NOT(TON4.Q);
  R_TRIG1(CLK := _TMP_ADD78_ENO);
  TON3(IN := TP1.Q, PT := T#250ms);
  CTU_LINT0(CU := R_TRIG1.Q, R := TON3.Q, PV := 7);
  TP1(IN := CTU_LINT0.Q, PT := T#2s);
  verificar := TP1.Q;
  luz1 := NOT(normal);
  luz2 := NOT(alto OR normal);
  _TMP_UINT_TO_UDINT8_OUT := UINT_TO_UDINT(EN := TON4.Q, IN := minimo_alto, ENO => _TMP_UINT_TO_UDINT8_ENO);
  _TMP_GE93_OUT := GE(EN := TON4.Q, IN1 := acumulador, IN2 := _TMP_UINT_TO_UDINT8_OUT, ENO => _TMP_GE93_ENO);
  _TMP_UINT_TO_UDINT9_OUT := UINT_TO_UDINT(EN := _TMP_GE93_OUT, IN := minimo_superior, ENO => _TMP_UINT_TO_UDINT9_ENO);
  _TMP_LT100_OUT := LT(EN := _TMP_GE93_OUT, IN1 := acumulador, IN2 := _TMP_UINT_TO_UDINT9_OUT, ENO => _TMP_LT100_ENO);
  TOF2(IN := _TMP_LT100_OUT, PT := T#4240ms);
  alto := TOF2.Q;
  _TMP_UINT_TO_UDINT12_OUT := UINT_TO_UDINT(EN := _TMP_GE93_OUT, IN := tope_alto, ENO => _TMP_UINT_TO_UDINT12_ENO);
  _TMP_GE104_OUT := GE(EN := _TMP_GE93_OUT, IN1 := acumulador, IN2 := _TMP_UINT_TO_UDINT12_OUT, ENO => _TMP_GE104_ENO);
  TOF0(IN := _TMP_GE104_OUT, PT := T#4240ms);
  superior := TOF0.Q;
  _TMP_UINT_TO_UDINT19_OUT := UINT_TO_UDINT(EN := TON4.Q, IN := minimo_alto, ENO => _TMP_UINT_TO_UDINT19_ENO);
  _TMP_LT17_OUT := LT(EN := TON4.Q, IN1 := acumulador, IN2 := _TMP_UINT_TO_UDINT19_OUT, ENO => _TMP_LT17_ENO);
  TOF3(IN := _TMP_LT17_OUT, PT := T#4240ms);
  normal := TOF3.Q;
  luz1 := alto OR superior;
  luz2 := superior;
  TON2(IN := _TMP_LT100_OUT, PT := T#1980ms);
  _TMP_MOVE21_OUT := MOVE(EN := TON2.Q, IN := 41350, ENO => _TMP_MOVE21_ENO);
  IF _TMP_MOVE21_ENO THEN
      acumulador := _TMP_MOVE21_OUT;
  END_IF;
  TON0(IN := _TMP_GE104_OUT, PT := T#1980ms);
  _TMP_MOVE24_OUT := MOVE(EN := TON0.Q, IN := 43000, ENO => _TMP_MOVE24_ENO);
  IF _TMP_MOVE24_ENO THEN
      acumulador := _TMP_MOVE24_OUT;
  END_IF;
  TON1(IN := _TMP_LT17_OUT, PT := T#1000ms);
  _TMP_MOVE37_OUT := MOVE(EN := TON1.Q, IN := 40000, ENO => _TMP_MOVE37_ENO);
  IF _TMP_MOVE37_ENO THEN
      acumulador := _TMP_MOVE37_OUT;
  END_IF;
  _TMP_GE166_OUT := GE(EN := timer2, IN1 := sensor, IN2 := 39000, ENO => _TMP_GE166_ENO);
  prueb := _TMP_GE166_OUT;
  prueb0 := _TMP_ADD78_ENO;
  TON5(IN := verificar, PT := T#430ms);
  TP2(IN := TON5.Q, PT := T#10ms);
  _TMP_DIV39_OUT := DIV(EN := TP2.Q, IN1 := acumulador, IN2 := 7, ENO => _TMP_DIV39_ENO);
  IF _TMP_DIV39_ENO THEN
      acumulador := _TMP_DIV39_OUT;
  END_IF;
  divide := _TMP_DIV39_ENO;
  compara := _TMP_LT17_ENO;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
