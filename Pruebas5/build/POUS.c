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

static inline UDINT __PROGRAM0_DIV__UDINT__UDINT__UDINT3(BOOL EN,
  UDINT IN1,
  UDINT IN2,
  PROGRAM0 *data__)
{
  UDINT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_DIV87_ENO,);
  __res = DIV__UDINT__UDINT__UDINT(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_DIV87_ENO,,__TMP_ENO);
  return __res;
}

static inline UDINT __PROGRAM0_UINT_TO_UDINT4(BOOL EN,
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

static inline BOOL __PROGRAM0_GE__BOOL__UDINT5(BOOL EN,
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

static inline UDINT __PROGRAM0_UINT_TO_UDINT6(BOOL EN,
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

static inline BOOL __PROGRAM0_LT__BOOL__UDINT7(BOOL EN,
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

static inline UDINT __PROGRAM0_UINT_TO_UDINT8(BOOL EN,
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

static inline BOOL __PROGRAM0_GE__BOOL__UDINT9(BOOL EN,
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

static inline BOOL __PROGRAM0_AND__BOOL__BOOL10(BOOL EN,
  UINT __PARAM_COUNT,
  BOOL IN1,
  BOOL IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_AND127_ENO,);
  __res = AND__BOOL__BOOL(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_AND127_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_OR__BOOL__BOOL11(BOOL EN,
  UINT __PARAM_COUNT,
  BOOL IN1,
  BOOL IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_OR129_ENO,);
  __res = OR__BOOL__BOOL(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_OR129_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->SENSOR,0,retain)
  __INIT_VAR(data__->TOPE_NORMAL,34500,retain)
  __INIT_VAR(data__->TOPE_ALTO,36800,retain)
  __INIT_VAR(data__->TOPE_SUPERIOR,38400,retain)
  __INIT_VAR(data__->MINIMO_ALTO,34501,retain)
  __INIT_VAR(data__->MINIMO_SUPERIOR,36801,retain)
  __INIT_VAR(data__->ACUMULADOR,38000,retain)
  __INIT_VAR(data__->ACUMULADOR_PRUEBA,35000,retain)
  __INIT_VAR(data__->ACUMULADOR_PRUEBA2,36900,retain)
  __INIT_VAR(data__->TIMER,1,retain)
  __INIT_VAR(data__->VERIFICAR,0,retain)
  __INIT_VAR(data__->TIMER_CORRIDO,0,retain)
  __INIT_VAR(data__->PROBAR,0,retain)
  __INIT_VAR(data__->ACUMULAR,0,retain)
  __INIT_VAR(data__->ENTRO,0,retain)
  __INIT_VAR(data__->LUZ1,0,retain)
  __INIT_VAR(data__->LUZ2,0,retain)
  TP_init__(&data__->TP0,retain);
  TOF_init__(&data__->TOF1,retain);
  TP_init__(&data__->TP3,retain);
  CTU_LINT_init__(&data__->CTU_LINT0,retain);
  TP_init__(&data__->TP1,retain);
  TOF_init__(&data__->TOF0,retain);
  TOF_init__(&data__->TOF2,retain);
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT81_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_UINT_TO_UDINT81_OUT,0,retain)
  __INIT_VAR(data__->_TMP_ADD78_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD78_OUT,0,retain)
  R_TRIG_init__(&data__->R_TRIG1,retain);
  __INIT_VAR(data__->_TMP_DIV87_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_DIV87_OUT,0,retain)
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
  __INIT_VAR(data__->_TMP_AND127_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND127_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR129_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR129_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,PROBAR,,__GET_VAR(data__->TIMER,));
  __SET_VAR(data__->TP0.,IN,,(!(__GET_VAR(data__->TIMER_CORRIDO,)) && __GET_VAR(data__->PROBAR,)));
  __SET_VAR(data__->TP0.,PT,,__time_to_timespec(1, 350, 0, 0, 0, 0));
  TP_body__(&data__->TP0);
  __SET_VAR(data__->,ACUMULAR,,__GET_VAR(data__->TP0.Q,));
  __SET_VAR(data__->TOF1.,IN,,__GET_VAR(data__->ACUMULAR,));
  __SET_VAR(data__->TOF1.,PT,,__time_to_timespec(1, 150, 0, 0, 0, 0));
  TOF_body__(&data__->TOF1);
  __SET_VAR(data__->,TIMER_CORRIDO,,__GET_VAR(data__->TOF1.Q,));
  __SET_VAR(data__->TP3.,IN,,__GET_VAR(data__->ACUMULAR,));
  __SET_VAR(data__->TP3.,PT,,__time_to_timespec(1, 75, 0, 0, 0, 0));
  TP_body__(&data__->TP3);
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT81_OUT,,__PROGRAM0_UINT_TO_UDINT1(
    (BOOL)__GET_VAR(data__->TP3.Q,),
    (UINT)__GET_VAR(data__->SENSOR,),
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
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->_TMP_ADD78_ENO,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTU_LINT0.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTU_LINT0.,R,,__GET_VAR(data__->_TMP_DIV87_ENO,));
  __SET_VAR(data__->CTU_LINT0.,PV,,7);
  CTU_LINT_body__(&data__->CTU_LINT0);
  __SET_VAR(data__->,_TMP_DIV87_OUT,,__PROGRAM0_DIV__UDINT__UDINT__UDINT3(
    (BOOL)__GET_VAR(data__->CTU_LINT0.Q,),
    (UDINT)__GET_VAR(data__->ACUMULADOR,),
    (UDINT)7,
    data__));
  if (__GET_VAR(data__->_TMP_DIV87_ENO,)) {
    __SET_VAR(data__->,ACUMULADOR,,__GET_VAR(data__->_TMP_DIV87_OUT,));
  };
  __SET_VAR(data__->,TIMER,,!(__GET_VAR(data__->VERIFICAR,)));
  __SET_VAR(data__->TP1.,IN,,__GET_VAR(data__->_TMP_DIV87_ENO,));
  __SET_VAR(data__->TP1.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TP_body__(&data__->TP1);
  __SET_VAR(data__->,VERIFICAR,,__GET_VAR(data__->TP1.Q,));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT8_OUT,,__PROGRAM0_UINT_TO_UDINT4(
    (BOOL)__GET_VAR(data__->VERIFICAR,),
    (UINT)__GET_VAR(data__->TOPE_NORMAL,),
    data__));
  __SET_VAR(data__->,_TMP_GE93_OUT,,__PROGRAM0_GE__BOOL__UDINT5(
    (BOOL)__GET_VAR(data__->VERIFICAR,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR_PRUEBA,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT8_OUT,),
    data__));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT9_OUT,,__PROGRAM0_UINT_TO_UDINT6(
    (BOOL)__GET_VAR(data__->_TMP_GE93_OUT,),
    (UINT)__GET_VAR(data__->MINIMO_SUPERIOR,),
    data__));
  __SET_VAR(data__->,_TMP_LT100_OUT,,__PROGRAM0_LT__BOOL__UDINT7(
    (BOOL)__GET_VAR(data__->_TMP_GE93_OUT,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR_PRUEBA,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT9_OUT,),
    data__));
  __SET_VAR(data__->,_TMP_UINT_TO_UDINT12_OUT,,__PROGRAM0_UINT_TO_UDINT8(
    (BOOL)__GET_VAR(data__->_TMP_LT100_OUT,),
    (UINT)__GET_VAR(data__->TOPE_ALTO,),
    data__));
  __SET_VAR(data__->,_TMP_GE104_OUT,,__PROGRAM0_GE__BOOL__UDINT9(
    (BOOL)__GET_VAR(data__->_TMP_LT100_OUT,),
    (UINT)2,
    (UDINT)__GET_VAR(data__->ACUMULADOR_PRUEBA2,),
    (UDINT)__GET_VAR(data__->_TMP_UINT_TO_UDINT12_OUT,),
    data__));
  __SET_VAR(data__->,_TMP_AND127_OUT,,__PROGRAM0_AND__BOOL__BOOL10(
    (BOOL)__GET_VAR(data__->_TMP_GE104_ENO,),
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_LT100_OUT,),
    (BOOL)__GET_VAR(data__->_TMP_GE104_OUT,),
    data__));
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->_TMP_AND127_OUT,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 3280, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,LUZ2,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,LUZ1,,__GET_VAR(data__->TOF0.Q,));
  __SET_VAR(data__->,_TMP_OR129_OUT,,__PROGRAM0_OR__BOOL__BOOL11(
    (BOOL)__GET_VAR(data__->_TMP_GE104_ENO,),
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_LT100_OUT,),
    (BOOL)__GET_VAR(data__->_TMP_GE104_OUT,),
    data__));
  __SET_VAR(data__->TOF2.,IN,,__GET_VAR(data__->_TMP_OR129_OUT,));
  __SET_VAR(data__->TOF2.,PT,,__time_to_timespec(1, 3280, 0, 0, 0, 0));
  TOF_body__(&data__->TOF2);
  __SET_VAR(data__->,LUZ1,,__GET_VAR(data__->TOF2.Q,));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





