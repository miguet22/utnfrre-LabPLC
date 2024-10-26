TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK


PROGRAM program0s
  VAR
    sensor : UINT := 0;
  END_VAR
  VAR CONSTANT
    min_baj : UINT := 33400;
  END_VAR
  VAR
    luz : BOOL := 0;
    luz1 : BOOL := 0;
    luzFIN : BOOL := 0;
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
    timer_normal : BOOL := 0;
    timer_alt : BOOL := 0;
    timer_sup : BOOL := 0;
    probarSup : BOOL := 0;
    probarNorm : BOOL := 0;
    ProbarAlt : BOOL := 0;
    inicio : BOOL := 0;
    TON0 : TON;
    CTU_LINT0 : CTU_LINT;
    CTU_LINT1 : CTU_LINT;
    TON1 : TON;
    CTU_LINT2 : CTU_LINT;
    CTU_LINT3 : CTU_LINT;
    TON2 : TON;
    CTU_LINT4 : CTU_LINT;
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
    R_TRIG2 : R_TRIG;
    _TMP_GE2_ENO : BOOL;
    _TMP_GE2_OUT : BOOL;
    _TMP_NOT117_OUT : BOOL;
    _TMP_NOT4_OUT : BOOL;
    _TMP_ADD9_ENO : BOOL;
    _TMP_ADD9_OUT : UINT;
    _TMP_DIV10_ENO : BOOL;
    _TMP_DIV10_OUT : UINT;
    R_TRIG3 : R_TRIG;
    _TMP_LE124_ENO : BOOL;
    _TMP_LE124_OUT : BOOL;
    _TMP_NOT15_OUT : BOOL;
    R_TRIG4 : R_TRIG;
    _TMP_GE131_ENO : BOOL;
    _TMP_GE131_OUT : BOOL;
    _TMP_NOT17_OUT : BOOL;
    R_TRIG5 : R_TRIG;
    _TMP_ADD22_ENO : BOOL;
    _TMP_ADD22_OUT : UINT;
    _TMP_DIV23_ENO : BOOL;
    _TMP_DIV23_OUT : UINT;
    _TMP_LT142_ENO : BOOL;
    _TMP_LT142_OUT : BOOL;
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
  R_TRIG2(CLK := timer_normal);
  CTU_LINT1(CU := R_TRIG2.Q, PV := 7);
  ProbarAlt := CTU_LINT1.Q;
  _TMP_GE2_OUT := GE(EN := ProbarAlt, IN1 := acum, IN2 := tope_baj, ENO => _TMP_GE2_ENO);
  IF _TMP_GE2_ENO THEN
      luz1 := _TMP_GE2_OUT;
  END_IF;
  _TMP_NOT117_OUT := NOT(_TMP_GE2_OUT);
  luz := _TMP_NOT117_OUT;
  IF _TMP_GE109_ENO THEN
      timer_sup := _TMP_GE109_OUT;
  END_IF;
  _TMP_NOT4_OUT := NOT(timer_sup);
  TON1(IN := _TMP_NOT4_OUT, PT := T#1s);
  timer_sup := TON1.Q;
  _TMP_ADD9_OUT := ADD(EN := timer_sup, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD9_ENO);
  _TMP_DIV10_OUT := DIV(EN := _TMP_ADD9_ENO, IN1 := _TMP_ADD9_OUT, IN2 := 2, ENO => _TMP_DIV10_ENO);
  IF _TMP_DIV10_ENO THEN
      acum := _TMP_DIV10_OUT;
  END_IF;
  R_TRIG3(CLK := timer_sup);
  CTU_LINT2(CU := R_TRIG3.Q, PV := 1);
  ProbarAlt := CTU_LINT2.Q;
  _TMP_LE124_OUT := LE(EN := ProbarAlt, IN1 := acum, IN2 := min_sup, ENO => _TMP_LE124_ENO);
  _TMP_NOT15_OUT := NOT(_TMP_LE124_OUT);
  luz := _TMP_NOT15_OUT;
  R_TRIG4(CLK := timer_sup);
  CTU_LINT3(CU := R_TRIG4.Q, PV := 7);
  _TMP_GE131_OUT := GE(EN := CTU_LINT3.Q, IN1 := acum, IN2 := tope_sup, ENO => _TMP_GE131_ENO);
  IF _TMP_GE131_ENO THEN
      luzFIN := _TMP_GE131_OUT;
  END_IF;
  IF _TMP_GE2_ENO THEN
      timer_alt := _TMP_GE2_OUT;
  END_IF;
  _TMP_NOT17_OUT := NOT(timer_alt);
  TON2(IN := _TMP_NOT17_OUT, PT := T#1s);
  timer_alt := TON2.Q;
  R_TRIG5(CLK := timer_alt);
  CTU_LINT4(CU := R_TRIG5.Q, PV := 1);
  probarNorm := CTU_LINT4.Q;
  _TMP_ADD22_OUT := ADD(EN := timer_alt, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD22_ENO);
  _TMP_DIV23_OUT := DIV(EN := _TMP_ADD22_ENO, IN1 := _TMP_ADD22_OUT, IN2 := 2, ENO => _TMP_DIV23_ENO);
  IF _TMP_DIV23_ENO THEN
      acum := _TMP_DIV23_OUT;
  END_IF;
  _TMP_LT142_OUT := LT(EN := probarNorm, IN1 := acum, IN2 := min_ALT, ENO => _TMP_LT142_ENO);
  IF _TMP_LT142_ENO THEN
      timer_normal := _TMP_LT142_OUT;
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0s;
  END_RESOURCE
END_CONFIGURATION
