PROGRAM program0
  VAR
    timer : BOOL := 1;
    probar_sig : BOOL := 0;
    entro : BOOL := 0;
    entro0 : BOOL := 0;
    timer_corrido : BOOL := 0;
    acumular : BOOL := 0;
    hubo_cambio : BOOL := 0;
    luz1 : BOOL := 0;
    luz2 : BOOL := 0;
  END_VAR
  VAR
    sensor AT %IW0.0 : UINT := 34500;
  END_VAR
  VAR
    acum : UINT := 60000;
    tope_normal : UINT := 60;
    tope_alto : UINT := 40000;
    tope_superior : UINT := 0;
    actual : INT := 3;
    TON2 : TON;
    TP0 : TP;
    TOF1 : TOF;
    TP3 : TP;
    TON1 : TON;
    TON4 : TON;
    TON3 : TON;
    TON0 : TON;
    TON6 : TON;
    _TMP_ADD78_ENO : BOOL;
    _TMP_ADD78_OUT : UINT;
    _TMP_DIV72_ENO : BOOL;
    _TMP_DIV72_OUT : UINT;
    _TMP_EQ5_ENO : BOOL;
    _TMP_EQ5_OUT : BOOL;
    _TMP_GE83_ENO : BOOL;
    _TMP_GE83_OUT : BOOL;
    _TMP_ADD16_ENO : BOOL;
    _TMP_ADD16_OUT : INT;
    _TMP_EQ32_ENO : BOOL;
    _TMP_EQ32_OUT : BOOL;
    _TMP_GE55_ENO : BOOL;
    _TMP_GE55_OUT : BOOL;
    _TMP_ADD91_ENO : BOOL;
    _TMP_ADD91_OUT : INT;
    _TMP_LT97_ENO : BOOL;
    _TMP_LT97_OUT : BOOL;
    _TMP_SUB100_ENO : BOOL;
    _TMP_SUB100_OUT : INT;
  END_VAR

  TON2(IN := timer, PT := T#7s);
  probar_sig := TON2.Q;
  TP0(IN := NOT(timer_corrido) AND NOT(probar_sig), PT := T#1s);
  acumular := TP0.Q;
  TOF1(IN := acumular, PT := T#80ms);
  timer_corrido := TOF1.Q;
  TP3(IN := acumular, PT := T#20ms);
  _TMP_ADD78_OUT := ADD(EN := TP3.Q, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD78_ENO);
  _TMP_DIV72_OUT := DIV(EN := _TMP_ADD78_ENO, IN1 := _TMP_ADD78_OUT, IN2 := 2, ENO => _TMP_DIV72_ENO);
  IF _TMP_DIV72_ENO THEN
      acum := _TMP_DIV72_OUT;
  END_IF;
  _TMP_EQ5_OUT := EQ(EN := probar_sig AND NOT(hubo_cambio), IN1 := actual, IN2 := 3, ENO => _TMP_EQ5_ENO);
  _TMP_GE83_OUT := GE(EN := _TMP_EQ5_OUT, IN1 := acum, IN2 := tope_normal, ENO => _TMP_GE83_ENO);
  TON1(IN := _TMP_GE83_OUT, PT := T#50ms);
  _TMP_ADD16_OUT := ADD(EN := TON1.Q, IN1 := actual, IN2 := 3, ENO => _TMP_ADD16_ENO);
  IF _TMP_ADD16_ENO THEN
      actual := _TMP_ADD16_OUT;
  END_IF;
  _TMP_EQ32_OUT := EQ(EN := probar_sig AND NOT(hubo_cambio), IN1 := actual, IN2 := 6, ENO => _TMP_EQ32_ENO);
  _TMP_GE55_OUT := GE(EN := _TMP_EQ32_OUT, IN1 := acum, IN2 := tope_alto, ENO => _TMP_GE55_ENO);
  TON6(IN := _TMP_GE55_OUT, PT := T#50ms);
  _TMP_ADD91_OUT := ADD(EN := TON6.Q, IN1 := actual, IN2 := 2, ENO => _TMP_ADD91_ENO);
  IF _TMP_ADD91_ENO THEN
      actual := _TMP_ADD91_OUT;
  END_IF;
  _TMP_LT97_OUT := LT(EN := _TMP_EQ32_OUT, IN1 := acum, IN2 := tope_alto, ENO => _TMP_LT97_ENO);
  TON0(IN := _TMP_LT97_OUT, PT := T#50ms);
  _TMP_SUB100_OUT := SUB(EN := TON0.Q, IN1 := actual, IN2 := 3, ENO => _TMP_SUB100_ENO);
  IF _TMP_SUB100_ENO THEN
      actual := _TMP_SUB100_OUT;
  END_IF;
  TON4(IN := _TMP_EQ32_OUT, PT := T#50ms);
  timer := NOT(TON4.Q);
  TON3(IN := _TMP_EQ5_OUT, PT := T#50ms);
  timer := NOT(TON3.Q);
  IF _TMP_GE83_ENO THEN
      luz1 := _TMP_GE83_OUT;
  END_IF;
  IF _TMP_GE55_ENO THEN
      luz2 := _TMP_GE55_OUT;
  END_IF;
  hubo_cambio := TON0.Q;
  IF _TMP_ADD16_ENO THEN
      hubo_cambio := _TMP_ADD16_ENO;
  END_IF;
  timer := NOT(TON0.Q);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
