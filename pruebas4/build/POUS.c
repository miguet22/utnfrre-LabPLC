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
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD78_ENO,);
  __res = ADD__UINT__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD78_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0_DIV__UINT__UINT__UINT2(BOOL EN,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV72_ENO,);
  __res = DIV__UINT__UINT__UINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV72_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT3(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ5_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ5_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UINT4(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE83_ENO,);
  __res = GE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE83_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT5(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD16_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD16_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT6(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ32_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ32_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UINT7(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE55_ENO,);
  __res = GE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE55_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT8(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD91_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD91_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LT__BOOL__UINT9(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LT97_ENO,);
  __res = LT__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LT97_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_SUB__INT__INT__INT10(BOOL EN,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_SUB100_ENO,);
  __res = SUB__INT__INT__INT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_SUB100_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->TIMER,1,retain)
  __INIT_VAR(data__->PROBAR_SIG,0,retain)
  __INIT_VAR(data__->ENTRO,0,retain)
  __INIT_VAR(data__->ENTRO0,0,retain)
  __INIT_VAR(data__->TIMER_CORRIDO,0,retain)
  __INIT_VAR(data__->ACUMULAR,0,retain)
  __INIT_VAR(data__->HUBO_CAMBIO,0,retain)
  __INIT_VAR(data__->LUZ1,0,retain)
  __INIT_VAR(data__->LUZ2,0,retain)
  __INIT_VAR(data__->SENSOR,34500,retain)
  __INIT_VAR(data__->ACUM,60000,retain)
  __INIT_VAR(data__->TOPE_NORMAL,60,retain)
  __INIT_VAR(data__->TOPE_ALTO,40000,retain)
  __INIT_VAR(data__->TOPE_SUPERIOR,0,retain)
  __INIT_VAR(data__->ACTUAL,3,retain)
  TON_init__(&data__->TON2,retain);
  TP_init__(&data__->TP0,retain);
  TOF_init__(&data__->TOF1,retain);
  TP_init__(&data__->TP3,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON6,retain);
  __INIT_VAR(data__->_TMP_ADD78_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD78_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV72_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV72_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ5_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ5_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE83_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE83_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD16_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD16_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ32_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ32_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE55_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE55_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD91_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD91_OUT,0,retain)
  __INIT_VAR(data__->_TMP_LT97_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT97_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SUB100_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SUB100_OUT,0,retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TIMER,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 7, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,PROBAR_SIG,,__GET_VAR(data__->TON2.Q,));
  __SET_VAR(data__->TP0.,IN,,(!(__GET_VAR(data__->TIMER_CORRIDO,)) && !(__GET_VAR(data__->PROBAR_SIG,))));
  __SET_VAR(data__->TP0.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TP_body__(&data__->TP0);
  __SET_VAR(data__->,ACUMULAR,,__GET_VAR(data__->TP0.Q,));
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->ACUMULAR,));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 80, 0, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,TIMER_CORRIDO,,__GET_VAR(data__->TOF1.Q,));
  __SET_VAR(data__->TP3.,IN,,__GET_VAR(data__->ACUMULAR,));
  __SET_VAR(data__->TP3.,PT,,__time_to_timespec(1, 20, 0, 0, 0, 0));
  TP_body__(&data__->TP3);
  __SET_VAR(data__->,_TMP_ADD78_OUT,,__PROGRAM0_ADD__UINT__UINT1(
    (BOOL)__GET_VAR(data__->TP3.Q,),
    (UINT)2,
    (UINT)__GET_VAR(data__->SENSOR,),
    (UINT)__GET_VAR(data__->ACUM,),
    data__));
  __SET_VAR(data__->,_TMP_DIV72_OUT,,__PROGRAM0_DIV__UINT__UINT__UINT2(
    (BOOL)__GET_VAR(data__->_TMP_ADD78_ENO,),
    (UINT)__GET_VAR(data__->_TMP_ADD78_OUT,),
    (UINT)2,
    data__));
  if (__GET_VAR(data__->_TMP_DIV72_ENO,)) {
    __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV72_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ5_OUT,,__PROGRAM0_EQ__BOOL__INT3(
    (BOOL)(__GET_VAR(data__->PROBAR_SIG,) && !(__GET_VAR(data__->HUBO_CAMBIO,))),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)3,
    data__));
  __SET_VAR(data__->,_TMP_GE83_OUT,,__PROGRAM0_GE__BOOL__UINT4(
    (BOOL)__GET_VAR(data__->_TMP_EQ5_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->_TMP_GE83_OUT,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 50, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,_TMP_ADD16_OUT,,__PROGRAM0_ADD__INT__INT5(
    (BOOL)__GET_VAR(data__->TON1.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)3,
    data__));
  if (__GET_VAR(data__->_TMP_ADD16_ENO,)) {
    __SET_VAR(data__->,ACTUAL,,__GET_VAR(data__->_TMP_ADD16_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ32_OUT,,__PROGRAM0_EQ__BOOL__INT6(
    (BOOL)(__GET_VAR(data__->PROBAR_SIG,) && !(__GET_VAR(data__->HUBO_CAMBIO,))),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)6,
    data__));
  __SET_VAR(data__->,_TMP_GE55_OUT,,__PROGRAM0_GE__BOOL__UINT7(
    (BOOL)__GET_VAR(data__->_TMP_EQ32_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_ALTO,),
    data__));
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->_TMP_GE55_OUT,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 50, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_ADD91_OUT,,__PROGRAM0_ADD__INT__INT8(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)2,
    data__));
  if (__GET_VAR(data__->_TMP_ADD91_ENO,)) {
    __SET_VAR(data__->,ACTUAL,,__GET_VAR(data__->_TMP_ADD91_OUT,));
  };
  __SET_VAR(data__->,_TMP_LT97_OUT,,__PROGRAM0_LT__BOOL__UINT9(
    (BOOL)__GET_VAR(data__->_TMP_EQ32_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_ALTO,),
    data__));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_LT97_OUT,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 50, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,_TMP_SUB100_OUT,,__PROGRAM0_SUB__INT__INT__INT10(
    (BOOL)__GET_VAR(data__->TON0.Q,),
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)3,
    data__));
  if (__GET_VAR(data__->_TMP_SUB100_ENO,)) {
    __SET_VAR(data__->,ACTUAL,,__GET_VAR(data__->_TMP_SUB100_OUT,));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->_TMP_EQ32_OUT,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 50, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->TON4.Q,)));
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->_TMP_EQ5_OUT,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 50, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->TON3.Q,)));
  if (__GET_VAR(data__->_TMP_GE83_ENO,)) {
    __SET_VAR(data__->,LUZ1,,__GET_VAR(data__->_TMP_GE83_OUT,));
  };
  if (__GET_VAR(data__->_TMP_GE55_ENO,)) {
    __SET_VAR(data__->,LUZ2,,__GET_VAR(data__->_TMP_GE55_OUT,));
  };
  __SET_VAR(data__->,HUBO_CAMBIO,,__GET_VAR(data__->TON0.Q,));
  if (__GET_VAR(data__->_TMP_ADD16_ENO,)) {
    __SET_VAR(data__->,HUBO_CAMBIO,,__GET_VAR(data__->_TMP_ADD16_ENO,));
  };
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->TON0.Q,)));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





