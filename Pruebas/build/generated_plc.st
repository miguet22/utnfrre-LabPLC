PROGRAM program0
  VAR
    timer : BOOL := 1;
    luz_1 : BOOL := 0;
    luz_2 : BOOL := 0;
    reset : BOOL := 0;
    timer_corrido : BOOL := 0;
    timer_norm : BOOL := 0;
    probar_norm : BOOL := 0;
    falso : BOOL := 0;
    acumular : BOOL;
    sal : BOOL := 0;
  END_VAR
  VAR
    sensor AT %IW0.0 : UINT := 0;
    acum AT %MW0.0 : UINT := 34000;
    acum2 AT %MW0.1 : UINT := 0;
  END_VAR
  VAR
    tope_normal : UINT := 0;
    TON0 : TON;
    TP1 : TP;
    TP0 : TP;
    TOF0 : TOF;
    _TMP_ADD30_ENO : BOOL;
    _TMP_ADD30_OUT : UINT;
    _TMP_DIV5_ENO : BOOL;
    _TMP_DIV5_OUT : UINT;
    _TMP_GE45_ENO : BOOL;
    _TMP_GE45_OUT : BOOL;
    _TMP_LT51_ENO : BOOL;
    _TMP_LT51_OUT : BOOL;
  END_VAR

  TON0(IN := timer, PT := T#7s);
  probar_norm := TON0.Q;
  TP1(IN := NOT(timer_corrido) OR probar_norm, PT := T#1s);
  acumular := TP1.Q;
  TP0(IN := acumular, PT := T#20ms);
  _TMP_ADD30_OUT := ADD(EN := TP0.Q, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD30_ENO);
  _TMP_DIV5_OUT := DIV(EN := _TMP_ADD30_ENO, IN1 := _TMP_ADD30_OUT, IN2 := 2, ENO => _TMP_DIV5_ENO);
  IF _TMP_DIV5_ENO THEN
      acum := _TMP_DIV5_OUT;
  END_IF;
  TOF0(IN := acumular, PT := T#80ms);
  timer_corrido := TOF0.Q;
  _TMP_GE45_OUT := GE(EN := probar_norm, IN1 := acum, IN2 := tope_normal, ENO => _TMP_GE45_ENO);
  timer_norm := _TMP_GE45_OUT;
  _TMP_LT51_OUT := LT(EN := probar_norm, IN1 := acum, IN2 := tope_normal, ENO => _TMP_LT51_ENO);
  timer := NOT(_TMP_LT51_OUT);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION