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
    TON2 : TON;
    timer : BOOL := 1;
    luz_1 : BOOL := 0;
    luz_2 : BOOL := 0;
    probar_sig : BOOL := 0;
    acumular : BOOL := 0;
    timer_corrido : BOOL := 0;
  END_VAR
  VAR
    sensor : UINT := 0;
    acum : UINT := 0;
  END_VAR
  VAR
    actual : INT := 3;
    tope_normal : UINT := 0;
    tope_alto : UINT := 0;
  END_VAR

  TON2(IN := timer, PT := T#7s);
  probar_sig := TON2.Q;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
  END_RESOURCE
END_CONFIGURATION
