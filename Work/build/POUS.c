void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





static inline UINT __PROGRAM0S_ADD__UINT__UINT1(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0S *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD105_ENO,);
  __res = ADD__UINT__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD105_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0S_DIV__UINT__UINT__UINT2(BOOL EN,
  UINT IN1,
  UINT IN2,
  PROGRAM0S *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV106_ENO,);
  __res = DIV__UINT__UINT__UINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV106_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0S_GE__BOOL__UINT3(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0S *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE109_ENO,);
  __res = GE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE109_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0S_init__(PROGRAM0S *data__, BOOL retain) {
  __INIT_LOCATED(UINT,__IW0_0,data__->SENSOR,retain)
  __INIT_LOCATED_VALUE(data__->SENSOR,0)
  __INIT_VAR(data__->MIN_BAJ,33400,retain)
  __INIT_LOCATED(BOOL,__QX0_0,data__->LUZ,retain)
  __INIT_LOCATED_VALUE(data__->LUZ,0)
  __INIT_LOCATED(BOOL,__QX0_1,data__->LUZ1,retain)
  __INIT_LOCATED_VALUE(data__->LUZ1,0)
  __INIT_VAR(data__->MIN_ALT,34501,retain)
  __INIT_VAR(data__->MIN_SUP,36801,retain)
  __INIT_VAR(data__->TOPE_BAJ,34500,retain)
  __INIT_VAR(data__->TOPE_ALT,36800,retain)
  __INIT_VAR(data__->TOPE_SUP,38400,retain)
  __INIT_VAR(data__->ACUM,0,retain)
  __INIT_VAR(data__->TIMER_NORMAL,1,retain)
  __INIT_VAR(data__->PROBARSUP,0,retain)
  __INIT_VAR(data__->PROBARALT,0,retain)
  __INIT_VAR(data__->INICIO,0,retain)
  TON_init__(&data__->TON0,retain);
  CTU_LINT_init__(&data__->CTU_LINT0,retain);
  __INIT_VAR(data__->_TMP_ADD82_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV92_OUT,0,retain)
  __INIT_VAR(data__->_TMP_NOT96_OUT,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  __INIT_VAR(data__->_TMP_ADD105_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD105_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV106_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV106_OUT,0,retain)
  __INIT_VAR(data__->_TMP_GE109_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE109_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PROGRAM0S_body__(PROGRAM0S *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD82_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_LOCATED(data__->SENSOR,),
    (UINT)__GET_VAR(data__->MIN_BAJ,)));
  __SET_VAR(data__->,_TMP_DIV92_OUT,,DIV__UINT__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_VAR(data__->_TMP_ADD82_OUT,),
    (UINT)2));
  __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV92_OUT,));
  __SET_VAR(data__->,_TMP_NOT96_OUT,,!(__GET_VAR(data__->TIMER_NORMAL,)));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_NOT96_OUT,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,TIMER_NORMAL,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->TIMER_NORMAL,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU_LINT0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU_LINT0.,PV,,4);
  CTU_LINT_body__(&data__->CTU_LINT0);
  __SET_VAR(data__->,PROBARSUP,,__GET_VAR(data__->CTU_LINT0.Q,));
  __SET_VAR(data__->,_TMP_ADD105_OUT,,__PROGRAM0S_ADD__UINT__UINT1(
    (BOOL)__GET_VAR(data__->TIMER_NORMAL,),
    (UINT)2,
    (UINT)__GET_LOCATED(data__->SENSOR,),
    (UINT)__GET_VAR(data__->ACUM,),
    data__));
  __SET_VAR(data__->,_TMP_DIV106_OUT,,__PROGRAM0S_DIV__UINT__UINT__UINT2(
    (BOOL)__GET_VAR(data__->_TMP_ADD105_ENO,),
    (UINT)__GET_VAR(data__->_TMP_ADD105_OUT,),
    (UINT)2,
    data__));
  if (__GET_VAR(data__->_TMP_DIV106_ENO,)) {
    __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV106_OUT,));
  };
  __SET_VAR(data__->,_TMP_GE109_OUT,,__PROGRAM0S_GE__BOOL__UINT3(
    (BOOL)__GET_VAR(data__->PROBARSUP,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_ALT,),
    data__));
  if (__GET_VAR(data__->_TMP_GE109_ENO,)) {
    __SET_LOCATED(data__->,LUZ,,__GET_VAR(data__->_TMP_GE109_OUT,));
  };
  if (__GET_VAR(data__->_TMP_GE109_ENO,)) {
    __SET_LOCATED(data__->,LUZ1,,__GET_VAR(data__->_TMP_GE109_OUT,));
  };

  goto __end;

__end:
  return;
} // PROGRAM0S_body__() 





