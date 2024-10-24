PROGRAM program0s
  VAR
    sensor AT %IW0.0 : UINT := 0;
  END_VAR
  VAR CONSTANT
    min_baj : UINT := 33400;
  END_VAR
  VAR
    luz AT %QX0.0 : BOOL := 0;
    luz1 AT %QX0.1 : BOOL := 0;
  END_VAR
  VAR CONSTANT
    min_ALT : UINT := 34501;
    min_sup : UINT := 36801;
    tope_baj : UINT := 34500;
    tope_alt : UINT := 36800;
    tope_sup : UINT := 38400;
  END_VAR
  VAR
    acum : UINT := 0;
    timer_normal : BOOL := 1;
    probarSup : BOOL := 0;
    ProbarAlt : BOOL := 0;
    inicio : BOOL := 0;
    TON0 : TON;
    CTU_LINT0 : CTU_LINT;
    _TMP_ADD82_OUT : UINT;
    _TMP_DIV92_OUT : UINT;
    _TMP_NOT96_OUT : BOOL;
    R_TRIG1 : R_TRIG;
    _TMP_ADD105_ENO : BOOL;
    _TMP_ADD105_OUT : UINT;
    _TMP_DIV106_ENO : BOOL;
    _TMP_DIV106_OUT : UINT;
    _TMP_GE109_ENO : BOOL;
    _TMP_GE109_OUT : BOOL;
  END_VAR

  _TMP_ADD82_OUT := ADD(sensor, min_baj);
  _TMP_DIV92_OUT := DIV(_TMP_ADD82_OUT, 2);
  acum := _TMP_DIV92_OUT;
  _TMP_NOT96_OUT := NOT(timer_normal);
  TON0(IN := _TMP_NOT96_OUT, PT := T#1s);
  timer_normal := TON0.Q;
  R_TRIG1(CLK := timer_normal);
  CTU_LINT0(CU := R_TRIG1.Q, PV := 4);
  probarSup := CTU_LINT0.Q;
  _TMP_ADD105_OUT := ADD(EN := timer_normal, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD105_ENO);
  _TMP_DIV106_OUT := DIV(EN := _TMP_ADD105_ENO, IN1 := _TMP_ADD105_OUT, IN2 := 2, ENO => _TMP_DIV106_ENO);
  IF _TMP_DIV106_ENO THEN
      acum := _TMP_DIV106_OUT;
  END_IF;
  _TMP_GE109_OUT := GE(EN := probarSup, IN1 := acum, IN2 := tope_alt, ENO => _TMP_GE109_ENO);
  IF _TMP_GE109_ENO THEN
      luz := _TMP_GE109_OUT;
  END_IF;
  IF _TMP_GE109_ENO THEN
      luz1 := _TMP_GE109_OUT;
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0s;
  END_RESOURCE
END_CONFIGURATION
