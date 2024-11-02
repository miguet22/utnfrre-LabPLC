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





static inline UDINT __PROGRAM0_UINT_TO_UDINT1(BOOL EN,
  UINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_UINT_TO_UDINT81_ENO,);
  __res = UINT_TO_UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_UINT_TO_UDINT81_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_ADD__UDINT__UDINT2(BOOL EN,
  UINT __PARAM_COUNT,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD78_ENO,);
  __res = ADD__UDINT__UDINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD78_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_UINT_TO_UDINT3(BOOL EN,
  UINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_UINT_TO_UDINT8_ENO,);
  __res = UINT_TO_UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_UINT_TO_UDINT8_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UDINT4(BOOL EN,
  UINT __PARAM_COUNT,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE93_ENO,);
  __res = GE__BOOL__UDINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE93_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_UINT_TO_UDINT5(BOOL EN,
  UINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_UINT_TO_UDINT9_ENO,);
  __res = UINT_TO_UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_UINT_TO_UDINT9_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LT__BOOL__UDINT6(BOOL EN,
  UINT __PARAM_COUNT,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LT100_ENO,);
  __res = LT__BOOL__UDINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LT100_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_UINT_TO_UDINT7(BOOL EN,
  UINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_UINT_TO_UDINT12_ENO,);
  __res = UINT_TO_UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_UINT_TO_UDINT12_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UDINT8(BOOL EN,
  UINT __PARAM_COUNT,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE104_ENO,);
  __res = GE__BOOL__UDINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE104_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_UINT_TO_UDINT9(BOOL EN,
  UINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_UINT_TO_UDINT19_ENO,);
  __res = UINT_TO_UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_UINT_TO_UDINT19_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_LT__BOOL__UDINT10(BOOL EN,
  UINT __PARAM_COUNT,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_LT17_ENO,);
  __res = LT__BOOL__UDINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_LT17_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_MOVE__UDINT__UDINT11(BOOL EN,
  UDINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE21_ENO,);
  __res = MOVE__UDINT__UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE21_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_MOVE__UDINT__UDINT12(BOOL EN,
  UDINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE24_ENO,);
  __res = MOVE__UDINT__UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE24_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_MOVE__UDINT__UDINT13(BOOL EN,
  UDINT IN,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE37_ENO,);
  __res = MOVE__UDINT__UDINT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE37_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_GE__BOOL__UINT14(BOOL EN,
  UINT __PARAM_COUNT,
  UINT IN1,
  UINT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_GE166_ENO,);
  __res = GE__BOOL__UINT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_GE166_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_DIV__UDINT__UDINT__UDINT15(BOOL EN,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV39_ENO,);
  __res = DIV__UDINT__UDINT__UDINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV39_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_LOCATED(UINT,__IW0,data__->SENSOR,retain)
  __INIT_LOCATED_VALUE(data__->SENSOR,0)
  __INIT_VAR(data__->TOPE_ALTO,43000,retain)
  __INIT_VAR(data__->MINIMO_ALTO,41900,retain)
  __INIT_VAR(data__->MINIMO_SUPERIOR,43001,retain)
  __INIT_VAR(data__->ACUMULADOR,0,retain)
  __INIT_VAR(data__->ACUMULADOR0,38000,retain)
  __INIT_VAR(data__->TIMER,1,retain)
  __INIT_VAR(data__->TIMER2,1,retain)
  __INIT_VAR(data__->NORMAL,1,retain)
  __INIT_VAR(data__->ALTO,0,retain)
  __INIT_VAR(data__->SUPERIOR,0,retain)
  __INIT_VAR(data__->VERIFICAR,0,retain)
  __INIT_VAR(data__->COMPARA,0,retain)
  __INIT_VAR(data__->DIVIDE,0,retain)
  __INIT_VAR(data__->TIMER_CORRIDO,0,retain)
  __INIT_VAR(data__->PROBAR,0,retain)
  __INIT_VAR(data__->ACUMULAR,0,retain)
  __INIT_LOCATED(BOOL,__QX0_0,data__->LUZ1,retain)
  __INIT_LOCATED_VALUE(data__->LUZ1,0)
  __INIT_LOCATED(BOOL,__QX0_1,data__->LUZ2,retain)
  __INIT_LOCATED_VALUE(data__->LUZ2,0)
  __INIT_LOCATED(BOOL,__QX0_2,data__->PRUEB,retain)
  __INIT_LOCATED_VALUE(data__->PRUEB,0)
  __INIT_LOCATED(BOOL,__QX0_3,data__->PRUEB0,retain)
  __INIT_LOCATED_VALUE(data__->PRUEB0,0)
  TP_init__(&data__->TP0,retain);
  TOF_init__(&data__->TOF1,retain);
  TP_init__(&data__->TP3,retain);
  CTU_LINT_init__(&data__->CTU_LINT0,retain);
  TP_init__(&data__->TP1,retain);
  TOF_init__(&data__->TOF0,retain);
  TOF_init__(&data__->TOF2,retain);
  TOF_init__(&data__->TOF3,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TP_init__(&data__->TP2,retain);
  TON_init__(&data__->TON5,retain);
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT81_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT81_OUT,0,retain)
  __INIT_VAR(data__->_TMP_ADD78_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD78_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT8_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT8_OUT,0,retain)
  __INIT_VAR(data__->_TMP_GE93_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE93_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT9_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT9_OUT,0,retain)
  __INIT_VAR(data__->_TMP_LT100_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT100_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT12_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT12_OUT,0,retain)
  __INIT_VAR(data__->_TMP_GE104_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE104_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT19_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT19_OUT,0,retain)
  __INIT_VAR(data__->_TMP_LT17_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_LT17_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE21_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE21_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE24_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE24_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE37_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE37_OUT,0,retain)
  __INIT_VAR(data__->_TMP_GE166_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_GE166_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV39_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV39_OUT,0,retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,PROBAR,,__GET_VAR(data__->TIMER,));
  __SET_VAR(data__->TP0.,IN,,(!(__GET_VAR(data__->TIMER_CORRIDO,)) && __GET_VAR(data__->PROBAR,)));
  __SET_VAR(data__->TP0.,PT,,__time_to_timespec(1, 350, 0, 0, 0, 0));
  TP_body__(&data__->TP0);
  __SET_VAR(data__->,ACUMULAR,,__GET_VAR(data__->TP0.Q,));
  __SET_VAR(data__->TOF1.,IN,,(__GET_VAR(data__->ACUMULAR,) && !(__GET_VAR(data__->VERIFICAR,))));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 150, 0, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,TIMER_CORRIDO,,__GET_VAR(data__->TOF1.Q,));
  __SET_VAR(data__->TP3.,IN,,(__GET_VAR(data__->ACUMULAR,) && !(__GET_VAR(data__->VERIFICAR,))));
  __SET_VAR(data__->TP3.,PT,,__time_to_timespec(1, 10, 0, 0, 0, 0));
  TP_body__(&data__->TP3);
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT81_OUT,,__PROGRAM0_UINT_TO_UDINT1(
    (BOOL)__GET_VAR(data__->TP3.Q,),
    (UINT)__GET_LOCATED(data__->SENSOR,),
    data__));
  __SET_VAR(data__->,_TMP_ADD78_OUT,,__PROGRAM0_ADD__UDINT__UDINT2(
    (BOOL)__GET_VAR(data__->TP3.Q,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT81_OUT,),
    data__));
  if (__GET_VAR(data__->_TMP_ADD78_ENO,)) {
    __SET_VAR(data__->,ACUMULADOR,,__GET_VAR(data__->_TMP_ADD78_OUT,));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->VERIFICAR,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 530, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->TON4.Q,)));
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->_TMP_ADD78_ENO,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->TP1.Q,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 250, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->CTU_LINT0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU_LINT0.,R,,__GET_VAR(data__->TON3.Q,));
  __SET_VAR(data__->CTU_LINT0.,PV,,7);
  CTU_LINT_body__(&data__->CTU_LINT0);
  __SET_VAR(data__->TP1.,IN,,__GET_VAR(data__->CTU_LINT0.Q,));
  __SET_VAR(data__->TP1.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TP_body__(&data__->TP1);
  __SET_VAR(data__->,VERIFICAR,,__GET_VAR(data__->TP1.Q,));
  __SET_LOCATED(data__->,LUZ1,,!(__GET_VAR(data__->NORMAL,)));
  __SET_LOCATED(data__->,LUZ2,,!((__GET_VAR(data__->ALTO,) || __GET_VAR(data__->NORMAL,))));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT8_OUT,,__PROGRAM0_UINT_TO_UDINT3(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (UINT)__GET_VAR(data__->MINIMO_ALTO,),
    data__));
  __SET_VAR(data__->,_TMP_GE93_OUT,,__PROGRAM0_GE__BOOL__UDINT4(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT8_OUT,),
    data__));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT9_OUT,,__PROGRAM0_UINT_TO_UDINT5(
    (BOOL)__GET_VAR(data__->_TMP_GE93_OUT,),
    (UINT)__GET_VAR(data__->MINIMO_SUPERIOR,),
    data__));
  __SET_VAR(data__->,_TMP_LT100_OUT,,__PROGRAM0_LT__BOOL__UDINT6(
    (BOOL)__GET_VAR(data__->_TMP_GE93_OUT,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT9_OUT,),
    data__));
  __SET_VAR(data__->TOF2.,IN,,__GET_VAR(data__->_TMP_LT100_OUT,));
  __SET_VAR(data__->TOF2.,PT,,__time_to_timespec(1, 4240, 0, 0, 0, 0));
  TOF_body__(&data__->TOF2);
  __SET_VAR(data__->,ALTO,,__GET_VAR(data__->TOF2.Q,));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT12_OUT,,__PROGRAM0_UINT_TO_UDINT7(
    (BOOL)__GET_VAR(data__->_TMP_GE93_OUT,),
    (UINT)__GET_VAR(data__->TOPE_ALTO,),
    data__));
  __SET_VAR(data__->,_TMP_GE104_OUT,,__PROGRAM0_GE__BOOL__UDINT8(
    (BOOL)__GET_VAR(data__->_TMP_GE93_OUT,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT12_OUT,),
    data__));
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->_TMP_GE104_OUT,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 4240, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,SUPERIOR,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT19_OUT,,__PROGRAM0_UINT_TO_UDINT9(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (UINT)__GET_VAR(data__->MINIMO_ALTO,),
    data__));
  __SET_VAR(data__->,_TMP_LT17_OUT,,__PROGRAM0_LT__BOOL__UDINT10(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT19_OUT,),
    data__));
  __SET_VAR(data__->TOF3.,IN,,__GET_VAR(data__->_TMP_LT17_OUT,));
  __SET_VAR(data__->TOF3.,PT,,__time_to_timespec(1, 4240, 0, 0, 0, 0));
  TOF_body__(&data__->TOF3);
  __SET_VAR(data__->,NORMAL,,__GET_VAR(data__->TOF3.Q,));
  __SET_LOCATED(data__->,LUZ1,,(__GET_VAR(data__->ALTO,) || __GET_VAR(data__->SUPERIOR,)));
  __SET_LOCATED(data__->,LUZ2,,__GET_VAR(data__->SUPERIOR,));
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->_TMP_LT100_OUT,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1980, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,_TMP_MOVE21_OUT,,__PROGRAM0_MOVE__UDINT__UDINT11(
    (BOOL)__GET_VAR(data__->TON2.Q,),
    (UDINT)41350,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE21_ENO,)) {
    __SET_VAR(data__->,ACUMULADOR,,__GET_VAR(data__->_TMP_MOVE21_OUT,));
  };
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_GE104_OUT,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1980, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,_TMP_MOVE24_OUT,,__PROGRAM0_MOVE__UDINT__UDINT12(
    (BOOL)__GET_VAR(data__->TON0.Q,),
    (UDINT)43000,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE24_ENO,)) {
    __SET_VAR(data__->,ACUMULADOR,,__GET_VAR(data__->_TMP_MOVE24_OUT,));
  };
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->_TMP_LT17_OUT,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,_TMP_MOVE37_OUT,,__PROGRAM0_MOVE__UDINT__UDINT13(
    (BOOL)__GET_VAR(data__->TON1.Q,),
    (UDINT)40000,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE37_ENO,)) {
    __SET_VAR(data__->,ACUMULADOR,,__GET_VAR(data__->_TMP_MOVE37_OUT,));
  };
  __SET_VAR(data__->,_TMP_GE166_OUT,,__PROGRAM0_GE__BOOL__UINT14(
    (BOOL)__GET_VAR(data__->TIMER2,),
    (UINT)2,
    (UINT)__GET_LOCATED(data__->SENSOR,),
    (UINT)39000,
    data__));
  __SET_LOCATED(data__->,PRUEB,,__GET_VAR(data__->_TMP_GE166_OUT,));
  __SET_LOCATED(data__->,PRUEB0,,__GET_VAR(data__->_TMP_ADD78_ENO,));
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->VERIFICAR,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 430, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  __SET_VAR(data__->TP2.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TP2.,PT,,__time_to_timespec(1, 10, 0, 0, 0, 0));
  TP_body__(&data__->TP2);
  __SET_VAR(data__->,_TMP_DIV39_OUT,,__PROGRAM0_DIV__UDINT__UDINT__UDINT15(
    (BOOL)__GET_VAR(data__->TP2.Q,),
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)7,
    data__));
  if (__GET_VAR(data__->_TMP_DIV39_ENO,)) {
    __SET_VAR(data__->,ACUMULADOR,,__GET_VAR(data__->_TMP_DIV39_OUT,));
  };
  __SET_VAR(data__->,DIVIDE,,__GET_VAR(data__->_TMP_DIV39_ENO,));
  __SET_VAR(data__->,COMPARA,,__GET_VAR(data__->_TMP_LT17_ENO,));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





