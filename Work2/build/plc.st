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


PROGRAM program0
  VAR
    sensor : UINT := 0;
  END_VAR
  VAR CONSTANT
    min_baj : UINT := 33400;
    top_baj : UINT := 34500;
    top_alt : UINT := 36800;
  END_VAR
  VAR
    acum : UINT := 0;
    timer_norm : BOOL := 1;
    timer_alt : BOOL := 0;
    sal : BOOL;
    TON0 : TON;
    CTU_LINT0 : CTU_LINT;
    TON1 : TON;
    CTU_LINT1 : CTU_LINT;
    _TMP_ADD9_OUT : UINT;
    _TMP_DIV10_OUT : UINT;
    _TMP_OR48_OUT : BOOL;
    _TMP_ADD30_ENO : BOOL;
    _TMP_ADD30_OUT : UINT;
    _TMP_DIV33_ENO : BOOL;
    _TMP_DIV33_OUT : UINT;
    _TMP_ADD36_ENO : BOOL;
    _TMP_ADD36_OUT : UINT;
    _TMP_DIV39_ENO : BOOL;
    _TMP_DIV39_OUT : UINT;
    R_TRIG1 : R_TRIG;
    _TMP_LE27_ENO : BOOL;
    _TMP_LE27_OUT : BOOL;
    R_TRIG2 : R_TRIG;
    _TMP_GE16_ENO : BOOL;
    _TMP_GE16_OUT : BOOL;
  END_VAR

  _TMP_ADD9_OUT := ADD(sensor, min_baj);
  _TMP_DIV10_OUT := DIV(_TMP_ADD9_OUT, 2);
  acum := _TMP_DIV10_OUT;
  _TMP_OR48_OUT := OR(TON0.Q, timer_norm);
  TON0(IN := _TMP_OR48_OUT, PT := T#1s);
  _TMP_ADD30_OUT := ADD(EN := TON0.Q, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD30_ENO);
  _TMP_DIV33_OUT := DIV(EN := _TMP_ADD30_ENO, IN1 := _TMP_ADD30_OUT, IN2 := 2, ENO => _TMP_DIV33_ENO);
  IF _TMP_DIV33_ENO THEN
      acum := _TMP_DIV33_OUT;
  END_IF;
  _TMP_ADD36_OUT := ADD(EN := timer_alt, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD36_ENO);
  _TMP_DIV39_OUT := DIV(EN := _TMP_ADD36_ENO, IN1 := _TMP_ADD36_OUT, IN2 := 2, ENO => _TMP_DIV39_ENO);
  IF _TMP_DIV39_ENO THEN
      acum := _TMP_DIV39_OUT;
  END_IF;
  TON1(IN := timer_alt, PT := T#1s);
  timer_alt := TON1.Q;
  R_TRIG1(CLK := timer_alt);
  CTU_LINT1(CU := R_TRIG1.Q, PV := 1);
  _TMP_LE27_OUT := LE(EN := CTU_LINT1.Q, IN1 := acum, IN2 := top_alt, ENO => _TMP_LE27_ENO);
  IF _TMP_LE27_ENO THEN
      timer_norm := _TMP_LE27_OUT;
  END_IF;
  R_TRIG2(CLK := TON0.Q);
  CTU_LINT0(CU := R_TRIG2.Q, PV := 7);
  _TMP_GE16_OUT := GE(EN := CTU_LINT0.Q, IN1 := acum, IN2 := top_baj, ENO => _TMP_GE16_ENO);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
