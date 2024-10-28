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
    timer : BOOL := 1;
    timer_corrido : BOOL := 0;
    acumular : BOOL := 0;
    probar_sig : BOOL := 0;
    luz1 : BOOL := 0;
    luz2 : BOOL := 0;
  END_VAR
  VAR
    sensor : UINT := 36000;
  END_VAR
  VAR
    acum : UINT := 34500;
    tope_normal : UINT := 34500;
    tope_alto : UINT := 36800;
    actual : INT := 3;
    TON0 : TON;
    TP0 : TP;
    TP1 : TP;
    TOF0 : TOF;
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    _TMP_ADD15_ENO : BOOL;
    _TMP_ADD15_OUT : UINT;
    _TMP_DIV18_ENO : BOOL;
    _TMP_DIV18_OUT : UINT;
    _TMP_EQ25_ENO : BOOL;
    _TMP_EQ25_OUT : BOOL;
    _TMP_GE32_ENO : BOOL;
    _TMP_GE32_OUT : BOOL;
    _TMP_ADD37_ENO : BOOL;
    _TMP_ADD37_OUT : INT;
    _TMP_EQ43_ENO : BOOL;
    _TMP_EQ43_OUT : BOOL;
    _TMP_LT42_ENO : BOOL;
    _TMP_LT42_OUT : BOOL;
    _TMP_GE49_ENO : BOOL;
    _TMP_GE49_OUT : BOOL;
    _TMP_ADD53_ENO : BOOL;
    _TMP_ADD53_OUT : INT;
    _TMP_LT28_ENO : BOOL;
    _TMP_LT28_OUT : BOOL;
  END_VAR

  TON0(IN := timer, PT := T#7s);
  probar_sig := TON0.Q;
  TP0(IN := NOT(timer_corrido) AND NOT(probar_sig), PT := T#1s);
  acumular := TP0.Q;
  TP1(IN := acumular, PT := T#20ms);
  _TMP_ADD15_OUT := ADD(EN := TP1.Q, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD15_ENO);
  _TMP_DIV18_OUT := DIV(EN := _TMP_ADD15_ENO, IN1 := _TMP_ADD15_OUT, IN2 := 2, ENO => _TMP_DIV18_ENO);
  IF _TMP_DIV18_ENO THEN
      acum := _TMP_DIV18_OUT;
  END_IF;
  TOF0(IN := acumular, PT := T#80ms);
  timer_corrido := TOF0.Q;
  _TMP_EQ25_OUT := EQ(EN := probar_sig, IN1 := actual, IN2 := 3, ENO => _TMP_EQ25_ENO);
  _TMP_GE32_OUT := GE(EN := _TMP_EQ25_OUT, IN1 := acum, IN2 := tope_normal, ENO => _TMP_GE32_ENO);
  luz1 := _TMP_GE32_OUT;
  TON2(IN := _TMP_GE32_OUT, PT := T#2s);
  _TMP_ADD37_OUT := ADD(EN := TON2.Q, IN1 := actual, IN2 := 3, ENO => _TMP_ADD37_ENO);
  IF _TMP_ADD37_ENO THEN
      actual := _TMP_ADD37_OUT;
  END_IF;
  TON3(IN := probar_sig, PT := T#4s);
  _TMP_EQ43_OUT := EQ(EN := TON3.Q, IN1 := actual, IN2 := 6, ENO => _TMP_EQ43_ENO);
  _TMP_LT42_OUT := LT(EN := _TMP_EQ43_OUT, IN1 := acum, IN2 := tope_alto, ENO => _TMP_LT42_ENO);
  timer := NOT(_TMP_LT42_OUT);
  _TMP_GE49_OUT := GE(EN := _TMP_EQ43_OUT, IN1 := acum, IN2 := tope_alto, ENO => _TMP_GE49_ENO);
  timer := NOT(_TMP_GE49_OUT);
  luz1 := _TMP_GE49_OUT;
  _TMP_ADD53_OUT := ADD(EN := _TMP_GE49_OUT, IN1 := actual, IN2 := 2, ENO => _TMP_ADD53_ENO);
  IF _TMP_ADD53_ENO THEN
      actual := _TMP_ADD53_OUT;
  END_IF;
  luz2 := _TMP_GE49_OUT;
  _TMP_LT28_OUT := LT(EN := _TMP_EQ25_OUT, IN1 := acum, IN2 := tope_normal, ENO => _TMP_LT28_ENO);
  TON1(IN := _TMP_LT28_OUT, PT := T#2s);
  timer := NOT(TON1.Q);
  timer := NOT(TON2.Q);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
