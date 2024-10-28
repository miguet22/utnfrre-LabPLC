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
    luz_1 : BOOL := 0;
    luz_2 : BOOL := 0;
    reset : BOOL := 0;
    timer_corrido_normal : BOOL := 0;
    timer_corrido_alto : BOOL := 1;
    timer_alt : BOOL := 0;
    probar_alt : BOOL := 0;
    probar_sig : BOOL := 0;
    probar_sup : BOOL := 0;
    falso : BOOL := 0;
    acumular_normal : BOOL;
    acumular_alto : BOOL;
    sal : BOOL := 0;
  END_VAR
  VAR
    sensor : UINT := 0;
    acum : UINT := 60000;
    acum2 : UINT := 0;
  END_VAR
  VAR
    tope_normal : UINT := 0;
    tope_alto : UINT := 0;
    actual : INT := 3;
    TON0 : TON;
    TP1 : TP;
    TP0 : TP;
    TOF0 : TOF;
    TON1 : TON;
    TON2 : TON;
    TP2 : TP;
    TP3 : TP;
    TOF1 : TOF;
    _TMP_ADD30_ENO : BOOL;
    _TMP_ADD30_OUT : UINT;
    _TMP_DIV5_ENO : BOOL;
    _TMP_DIV5_OUT : UINT;
    _TMP_GE45_ENO : BOOL;
    _TMP_GE45_OUT : BOOL;
    _TMP_LT51_ENO : BOOL;
    _TMP_LT51_OUT : BOOL;
    _TMP_ADD67_ENO : BOOL;
    _TMP_ADD67_OUT : UINT;
    _TMP_DIV72_ENO : BOOL;
    _TMP_DIV72_OUT : UINT;
    _TMP_EQ79_ENO : BOOL;
    _TMP_EQ79_OUT : BOOL;
    _TMP_LT41_ENO : BOOL;
    _TMP_LT41_OUT : BOOL;
    _TMP_GE83_ENO : BOOL;
    _TMP_GE83_OUT : BOOL;
    _TMP_ADD88_ENO : BOOL;
    _TMP_ADD88_OUT : INT;
    _TMP_EQ32_ENO : BOOL;
    _TMP_EQ32_OUT : BOOL;
    _TMP_GE55_ENO : BOOL;
    _TMP_GE55_OUT : BOOL;
    _TMP_ADD91_ENO : BOOL;
    _TMP_ADD91_OUT : INT;
    _TMP_LT97_ENO : BOOL;
    _TMP_LT97_OUT : BOOL;
    _TMP_EQ64_ENO : BOOL;
    _TMP_EQ64_OUT : BOOL;
  END_VAR

  TON0(IN := timer, PT := T#7s);
  probar_alt := TON0.Q;
  TP1(IN := NOT(timer_corrido_normal) AND NOT(probar_alt) AND NOT(probar_sup), PT := T#1s);
  acumular_normal := TP1.Q;
  TP0(IN := acumular_normal, PT := T#20ms);
  _TMP_ADD30_OUT := ADD(EN := TP0.Q, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD30_ENO);
  _TMP_DIV5_OUT := DIV(EN := _TMP_ADD30_ENO, IN1 := _TMP_ADD30_OUT, IN2 := 2, ENO => _TMP_DIV5_ENO);
  IF _TMP_DIV5_ENO THEN
      acum := _TMP_DIV5_OUT;
  END_IF;
  TOF0(IN := acumular_normal, PT := T#80ms);
  timer_corrido_normal := TOF0.Q;
  _TMP_GE45_OUT := GE(EN := probar_alt, IN1 := acum, IN2 := tope_normal, ENO => _TMP_GE45_ENO);
  timer_alt := _TMP_GE45_OUT;
  _TMP_LT51_OUT := LT(EN := probar_alt, IN1 := acum, IN2 := tope_normal, ENO => _TMP_LT51_ENO);
  timer := NOT(_TMP_LT51_OUT);
  TON1(IN := timer_alt, PT := T#7s);
  probar_sup := TON1.Q;
  luz_1 := _TMP_GE45_OUT;
  TON2(IN := timer, PT := T#7s);
  probar_sig := TON2.Q;
  TP2(IN := NOT(timer_corrido_normal) AND NOT(probar_sig), PT := T#1s);
  acumular_normal := TP2.Q;
  TP3(IN := acumular_normal, PT := T#20ms);
  _TMP_ADD67_OUT := ADD(EN := TP3.Q, IN1 := sensor, IN2 := acum, ENO => _TMP_ADD67_ENO);
  _TMP_DIV72_OUT := DIV(EN := _TMP_ADD67_ENO, IN1 := _TMP_ADD67_OUT, IN2 := 2, ENO => _TMP_DIV72_ENO);
  IF _TMP_DIV72_ENO THEN
      acum := _TMP_DIV72_OUT;
  END_IF;
  TOF1(IN := acumular_normal, PT := T#80ms);
  timer_corrido_normal := TOF1.Q;
  _TMP_EQ79_OUT := EQ(EN := probar_sig, IN1 := actual, IN2 := 3, ENO => _TMP_EQ79_ENO);
  _TMP_LT41_OUT := LT(EN := _TMP_EQ79_OUT, IN1 := acum, IN2 := tope_normal, ENO => _TMP_LT41_ENO);
  timer := NOT(_TMP_LT41_OUT);
  _TMP_GE83_OUT := GE(EN := _TMP_EQ79_OUT, IN1 := acum, IN2 := tope_normal, ENO => _TMP_GE83_ENO);
  timer := NOT(_TMP_GE83_OUT);
  luz_1 := _TMP_GE83_OUT;
  _TMP_ADD88_OUT := ADD(EN := _TMP_GE83_OUT, IN1 := actual, IN2 := 3, ENO => _TMP_ADD88_ENO);
  IF _TMP_ADD88_ENO THEN
      actual := _TMP_ADD88_OUT;
  END_IF;
  _TMP_EQ32_OUT := EQ(EN := probar_sig, IN1 := actual, IN2 := 6, ENO => _TMP_EQ32_ENO);
  _TMP_GE55_OUT := GE(EN := _TMP_EQ32_OUT, IN1 := acum, IN2 := tope_alto, ENO => _TMP_GE55_ENO);
  luz_1 := _TMP_GE55_OUT;
  _TMP_ADD91_OUT := ADD(EN := _TMP_GE55_OUT, IN1 := actual, IN2 := 2, ENO => _TMP_ADD91_ENO);
  IF _TMP_ADD91_ENO THEN
      actual := _TMP_ADD91_OUT;
  END_IF;
  luz_2 := _TMP_GE55_OUT;
  _TMP_LT97_OUT := LT(EN := _TMP_EQ32_OUT, IN1 := acum, IN2 := tope_normal, ENO => _TMP_LT97_ENO);
  timer := NOT(_TMP_LT97_OUT);
  timer := NOT(_TMP_GE55_OUT);
  _TMP_EQ64_OUT := EQ(EN := probar_sig, IN1 := actual, IN2 := 7, ENO => _TMP_EQ64_ENO);
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
