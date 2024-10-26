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





static inline UINT __PROGRAM0_ADD__UINT__UINT1(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD30_ENO,);
  __res = ADD__UINT__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD30_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0_DIV__UINT__UINT__UINT2(BOOL EN,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV33_ENO,);
  __res = DIV__UINT__UINT__UINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV33_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0_ADD__UINT__UINT3(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD36_ENO,);
  __res = ADD__UINT__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD36_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0_DIV__UINT__UINT__UINT4(BOOL EN,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV39_ENO,);
  __res = DIV__UINT__UINT__UINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV39_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LE__BOOL__UINT5(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LE27_ENO,);
  __res = LE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LE27_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UINT6(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE16_ENO,);
  __res = GE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE16_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->SENSOR,0,retain)
  __INIT_VAR(data__->MIN_BAJ,33400,retain)
  __INIT_VAR(data__->TOP_BAJ,34500,retain)
  __INIT_VAR(data__->TOP_ALT,36800,retain)
  __INIT_VAR(data__->ACUM,0,retain)
  __INIT_VAR(data__->TIMER_NORM,1,retain)
  __INIT_VAR(data__->TIMER_ALT,0,retain)
  __INIT_VAR(data__->SAL,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON0,retain);
  CTU_LINT_init__(&data__->CTU_LINT0,retain);
  TON_init__(&data__->TON1,retain);
  CTU_LINT_init__(&data__->CTU_LINT1,retain);
  __INIT_VAR(data__->_TMP_ADD9_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_OR48_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD30_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD30_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV33_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV33_OUT,0,retain)
  __INIT_VAR(data__->_TMP_ADD36_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD36_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV39_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV39_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  __INIT_VAR(data__->_TMP_LE27_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LE27_OUT,__BOOL_LITERAL(FALSE),retain)
  R_TRIG_init__(&data__->R_TRIG2,retain);
  __INIT_VAR(data__->_TMP_GE16_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE16_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD9_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->SENSOR,),
    (UINT)__GET_VAR(data__->MIN_BAJ,)));
  __SET_VAR(data__->,_TMP_DIV10_OUT,,DIV__UINT__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_VAR(data__->_TMP_ADD9_OUT,),
    (UINT)2));
  __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV10_OUT,));
  __SET_VAR(data__->,_TMP_OR48_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->TON0.Q,),
    (BOOL)__GET_VAR(data__->TIMER_NORM,)));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_OR48_OUT,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,_TMP_ADD30_OUT,,__PROGRAM0_ADD__UINT__UINT1(
    (BOOL)__GET_VAR(data__->TON0.Q,),
    (UINT)2,
    (UINT)__GET_VAR(data__->SENSOR,),
    (UINT)__GET_VAR(data__->ACUM,),
    data__));
  __SET_VAR(data__->,_TMP_DIV33_OUT,,__PROGRAM0_DIV__UINT__UINT__UINT2(
    (BOOL)__GET_VAR(data__->_TMP_ADD30_ENO,),
    (UINT)__GET_VAR(data__->_TMP_ADD30_OUT,),
    (UINT)2,
    data__));
  if (__GET_VAR(data__->_TMP_DIV33_ENO,)) {
    __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV33_OUT,));
  };
  __SET_VAR(data__->,_TMP_ADD36_OUT,,__PROGRAM0_ADD__UINT__UINT3(
    (BOOL)__GET_VAR(data__->TIMER_ALT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->SENSOR,),
    (UINT)__GET_VAR(data__->ACUM,),
    data__));
  __SET_VAR(data__->,_TMP_DIV39_OUT,,__PROGRAM0_DIV__UINT__UINT__UINT4(
    (BOOL)__GET_VAR(data__->_TMP_ADD36_ENO,),
    (UINT)__GET_VAR(data__->_TMP_ADD36_OUT,),
    (UINT)2,
    data__));
  if (__GET_VAR(data__->_TMP_DIV39_ENO,)) {
    __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV39_OUT,));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TIMER_ALT,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,TIMER_ALT,,__GET_VAR(data__->TON1.Q,));
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->TIMER_ALT,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU_LINT1.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU_LINT1.,PV,,1);
  CTU_LINT_body__(&data__->CTU_LINT1);
  __SET_VAR(data__->,_TMP_LE27_OUT,,__PROGRAM0_LE__BOOL__UINT5(
    (BOOL)__GET_VAR(data__->CTU_LINT1.Q,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOP_ALT,),
    data__));
  if (__GET_VAR(data__->_TMP_LE27_ENO,)) {
    __SET_VAR(data__->,TIMER_NORM,,__GET_VAR(data__->_TMP_LE27_OUT,));
  };
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->TON0.Q,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTU_LINT0.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTU_LINT0.,PV,,7);
  CTU_LINT_body__(&data__->CTU_LINT0);
  __SET_VAR(data__->,_TMP_GE16_OUT,,__PROGRAM0_GE__BOOL__UINT6(
    (BOOL)__GET_VAR(data__->CTU_LINT0.Q,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOP_BAJ,),
    data__));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





