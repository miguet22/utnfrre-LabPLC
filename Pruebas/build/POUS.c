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
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV5_ENO,);
  __res = DIV__UINT__UINT__UINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV5_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UINT3(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE45_ENO,);
  __res = GE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE45_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LT__BOOL__UINT4(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LT51_ENO,);
  __res = LT__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LT51_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0_ADD__UINT__UINT5(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  UINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD67_ENO,);
  __res = ADD__UINT__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD67_ENO,,__TMP_ENO);
  return __res;
}

static inline UINT __PROGRAM0_DIV__UINT__UINT__UINT6(BOOL EN,
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

static inline BOOL __PROGRAM0_EQ__BOOL__INT7(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ79_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ79_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LT__BOOL__UINT8(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LT41_ENO,);
  __res = LT__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LT41_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UINT9(BOOL EN,
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

static inline INT __PROGRAM0_ADD__INT__INT10(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD88_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD88_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT11(BOOL EN,
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

static inline BOOL __PROGRAM0_GE__BOOL__UINT12(BOOL EN,
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

static inline INT __PROGRAM0_ADD__INT__INT13(BOOL EN,
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

static inline BOOL __PROGRAM0_LT__BOOL__UINT14(BOOL EN,
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

static inline BOOL __PROGRAM0_EQ__BOOL__INT15(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ64_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ64_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->TIMER,1,retain)
  __INIT_VAR(data__->LUZ_1,0,retain)
  __INIT_VAR(data__->LUZ_2,0,retain)
  __INIT_VAR(data__->RESET,0,retain)
  __INIT_VAR(data__->TIMER_CORRIDO_NORMAL,0,retain)
  __INIT_VAR(data__->TIMER_CORRIDO_ALTO,1,retain)
  __INIT_VAR(data__->TIMER_ALT,0,retain)
  __INIT_VAR(data__->PROBAR_ALT,0,retain)
  __INIT_VAR(data__->PROBAR_SIG,0,retain)
  __INIT_VAR(data__->PROBAR_SUP,0,retain)
  __INIT_VAR(data__->FALSO,0,retain)
  __INIT_VAR(data__->ACUMULAR_NORMAL,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACUMULAR_ALTO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SAL,0,retain)
  __INIT_VAR(data__->SENSOR,0,retain)
  __INIT_VAR(data__->ACUM,60000,retain)
  __INIT_VAR(data__->ACUM2,0,retain)
  __INIT_VAR(data__->TOPE_NORMAL,0,retain)
  __INIT_VAR(data__->TOPE_ALTO,0,retain)
  __INIT_VAR(data__->ACTUAL,3,retain)
  TON_init__(&data__->TON0,retain);
  TP_init__(&data__->TP1,retain);
  TP_init__(&data__->TP0,retain);
  TOF_init__(&data__->TOF0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TP_init__(&data__->TP2,retain);
  TP_init__(&data__->TP3,retain);
  TOF_init__(&data__->TOF1,retain);
  __INIT_VAR(data__->_TMP_ADD30_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD30_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV5_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV5_OUT,0,retain)
  __INIT_VAR(data__->_TMP_GE45_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE45_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT51_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT51_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD67_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD67_OUT,0,retain)
  __INIT_VAR(data__->_TMP_DIV72_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV72_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ79_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ79_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT41_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT41_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE83_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE83_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD88_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD88_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ32_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ32_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE55_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE55_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD91_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD91_OUT,0,retain)
  __INIT_VAR(data__->_TMP_LT97_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT97_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ64_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ64_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->TIMER,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 0, 7, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,PROBAR_ALT,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->TP1.,IN,,((!(__GET_VAR(data__->TIMER_CORRIDO_NORMAL,)) && !(__GET_VAR(data__->PROBAR_ALT,))) && !(__GET_VAR(data__->PROBAR_SUP,))));
  __SET_VAR(data__->TP1.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TP_body__(&data__->TP1);
  __SET_VAR(data__->,ACUMULAR_NORMAL,,__GET_VAR(data__->TP1.Q,));
  __SET_VAR(data__->TP0.,IN,,__GET_VAR(data__->ACUMULAR_NORMAL,));
  __SET_VAR(data__->TP0.,PT,,__time_to_timespec(1, 20, 0, 0, 0, 0));
  TP_body__(&data__->TP0);
  __SET_VAR(data__->,_TMP_ADD30_OUT,,__PROGRAM0_ADD__UINT__UINT1(
    (BOOL)__GET_VAR(data__->TP0.Q,),
    (UINT)2,
    (UINT)__GET_VAR(data__->SENSOR,),
    (UINT)__GET_VAR(data__->ACUM,),
    data__));
  __SET_VAR(data__->,_TMP_DIV5_OUT,,__PROGRAM0_DIV__UINT__UINT__UINT2(
    (BOOL)__GET_VAR(data__->_TMP_ADD30_ENO,),
    (UINT)__GET_VAR(data__->_TMP_ADD30_OUT,),
    (UINT)2,
    data__));
  if (__GET_VAR(data__->_TMP_DIV5_ENO,)) {
    __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV5_OUT,));
  };
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->ACUMULAR_NORMAL,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 80, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,TIMER_CORRIDO_NORMAL,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,_TMP_GE45_OUT,,__PROGRAM0_GE__BOOL__UINT3(
    (BOOL)__GET_VAR(data__->PROBAR_ALT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->,TIMER_ALT,,__GET_VAR(data__->_TMP_GE45_OUT,));
  __SET_VAR(data__->,_TMP_LT51_OUT,,__PROGRAM0_LT__BOOL__UINT4(
    (BOOL)__GET_VAR(data__->PROBAR_ALT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->_TMP_LT51_OUT,)));
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->TIMER_ALT,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 0, 7, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,PROBAR_SUP,,__GET_VAR(data__->TON1.Q,));
  __SET_VAR(data__->,LUZ_1,,__GET_VAR(data__->_TMP_GE45_OUT,));
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->TIMER,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 0, 7, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,PROBAR_SIG,,__GET_VAR(data__->TON2.Q,));
  __SET_VAR(data__->TP2.,IN,,(!(__GET_VAR(data__->TIMER_CORRIDO_NORMAL,)) && !(__GET_VAR(data__->PROBAR_SIG,))));
  __SET_VAR(data__->TP2.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TP_body__(&data__->TP2);
  __SET_VAR(data__->,ACUMULAR_NORMAL,,__GET_VAR(data__->TP2.Q,));
  __SET_VAR(data__->TP3.,IN,,__GET_VAR(data__->ACUMULAR_NORMAL,));
  __SET_VAR(data__->TP3.,PT,,__time_to_timespec(1, 20, 0, 0, 0, 0));
  TP_body__(&data__->TP3);
  __SET_VAR(data__->,_TMP_ADD67_OUT,,__PROGRAM0_ADD__UINT__UINT5(
    (BOOL)__GET_VAR(data__->TP3.Q,),
    (UINT)2,
    (UINT)__GET_VAR(data__->SENSOR,),
    (UINT)__GET_VAR(data__->ACUM,),
    data__));
  __SET_VAR(data__->,_TMP_DIV72_OUT,,__PROGRAM0_DIV__UINT__UINT__UINT6(
    (BOOL)__GET_VAR(data__->_TMP_ADD67_ENO,),
    (UINT)__GET_VAR(data__->_TMP_ADD67_OUT,),
    (UINT)2,
    data__));
  if (__GET_VAR(data__->_TMP_DIV72_ENO,)) {
    __SET_VAR(data__->,ACUM,,__GET_VAR(data__->_TMP_DIV72_OUT,));
  };
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->ACUMULAR_NORMAL,));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 80, 0, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,TIMER_CORRIDO_NORMAL,,__GET_VAR(data__->TOF1.Q,));
  __SET_VAR(data__->,_TMP_EQ79_OUT,,__PROGRAM0_EQ__BOOL__INT7(
    (BOOL)__GET_VAR(data__->PROBAR_SIG,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)3,
    data__));
  __SET_VAR(data__->,_TMP_LT41_OUT,,__PROGRAM0_LT__BOOL__UINT8(
    (BOOL)__GET_VAR(data__->_TMP_EQ79_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->_TMP_LT41_OUT,)));
  __SET_VAR(data__->,_TMP_GE83_OUT,,__PROGRAM0_GE__BOOL__UINT9(
    (BOOL)__GET_VAR(data__->_TMP_EQ79_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->_TMP_GE83_OUT,)));
  __SET_VAR(data__->,LUZ_1,,__GET_VAR(data__->_TMP_GE83_OUT,));
  __SET_VAR(data__->,_TMP_ADD88_OUT,,__PROGRAM0_ADD__INT__INT10(
    (BOOL)__GET_VAR(data__->_TMP_GE83_OUT,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)3,
    data__));
  if (__GET_VAR(data__->_TMP_ADD88_ENO,)) {
    __SET_VAR(data__->,ACTUAL,,__GET_VAR(data__->_TMP_ADD88_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ32_OUT,,__PROGRAM0_EQ__BOOL__INT11(
    (BOOL)__GET_VAR(data__->PROBAR_SIG,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)6,
    data__));
  __SET_VAR(data__->,_TMP_GE55_OUT,,__PROGRAM0_GE__BOOL__UINT12(
    (BOOL)__GET_VAR(data__->_TMP_EQ32_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_ALTO,),
    data__));
  __SET_VAR(data__->,LUZ_1,,__GET_VAR(data__->_TMP_GE55_OUT,));
  __SET_VAR(data__->,_TMP_ADD91_OUT,,__PROGRAM0_ADD__INT__INT13(
    (BOOL)__GET_VAR(data__->_TMP_GE55_OUT,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)2,
    data__));
  if (__GET_VAR(data__->_TMP_ADD91_ENO,)) {
    __SET_VAR(data__->,ACTUAL,,__GET_VAR(data__->_TMP_ADD91_OUT,));
  };
  __SET_VAR(data__->,LUZ_2,,__GET_VAR(data__->_TMP_GE55_OUT,));
  __SET_VAR(data__->,_TMP_LT97_OUT,,__PROGRAM0_LT__BOOL__UINT14(
    (BOOL)__GET_VAR(data__->_TMP_EQ32_OUT,),
    (UINT)2,
    (UINT)__GET_VAR(data__->ACUM,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->_TMP_LT97_OUT,)));
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->_TMP_GE55_OUT,)));
  __SET_VAR(data__->,_TMP_EQ64_OUT,,__PROGRAM0_EQ__BOOL__INT15(
    (BOOL)__GET_VAR(data__->PROBAR_SIG,),
    (UINT)2,
    (INT)__GET_VAR(data__->ACTUAL,),
    (INT)7,
    data__));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





