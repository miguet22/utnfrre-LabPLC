#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM PROGRAM0
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(UINT,SENSOR)
  __DECLARE_VAR(UINT,TOPE_NORMAL)
  __DECLARE_VAR(UINT,TOPE_ALTO)
  __DECLARE_VAR(UINT,TOPE_SUPERIOR)
  __DECLARE_VAR(UINT,MINIMO_ALTO)
  __DECLARE_VAR(UINT,MINIMO_SUPERIOR)
  __DECLARE_VAR(UDINT,ACUMULADOR)
  __DECLARE_VAR(UDINT,ACUMULADOR_PRUEBA)
  __DECLARE_VAR(UDINT,ACUMULADOR_PRUEBA2)
  __DECLARE_VAR(BOOL,TIMER)
  __DECLARE_VAR(BOOL,VERIFICAR)
  __DECLARE_VAR(BOOL,TIMER_CORRIDO)
  __DECLARE_VAR(BOOL,PROBAR)
  __DECLARE_VAR(BOOL,ACUMULAR)
  __DECLARE_VAR(BOOL,ENTRO)
  __DECLARE_VAR(BOOL,LUZ1)
  __DECLARE_VAR(BOOL,LUZ2)
  TP TP0;
  TOF TOF1;
  TP TP3;
  CTU_LINT CTU_LINT0;
  TP TP1;
  TOF TOF0;
  TOF TOF2;
  __DECLARE_VAR(BOOL,_TMP_UINT_TO_UDINT81_ENO)
  __DECLARE_VAR(UDINT,_TMP_UINT_TO_UDINT81_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD78_ENO)
  __DECLARE_VAR(UDINT,_TMP_ADD78_OUT)
  R_TRIG R_TRIG1;
  __DECLARE_VAR(BOOL,_TMP_DIV87_ENO)
  __DECLARE_VAR(UDINT,_TMP_DIV87_OUT)
  __DECLARE_VAR(BOOL,_TMP_UINT_TO_UDINT8_ENO)
  __DECLARE_VAR(UDINT,_TMP_UINT_TO_UDINT8_OUT)
  __DECLARE_VAR(BOOL,_TMP_GE93_ENO)
  __DECLARE_VAR(BOOL,_TMP_GE93_OUT)
  __DECLARE_VAR(BOOL,_TMP_UINT_TO_UDINT9_ENO)
  __DECLARE_VAR(UDINT,_TMP_UINT_TO_UDINT9_OUT)
  __DECLARE_VAR(BOOL,_TMP_LT100_ENO)
  __DECLARE_VAR(BOOL,_TMP_LT100_OUT)
  __DECLARE_VAR(BOOL,_TMP_UINT_TO_UDINT12_ENO)
  __DECLARE_VAR(UDINT,_TMP_UINT_TO_UDINT12_OUT)
  __DECLARE_VAR(BOOL,_TMP_GE104_ENO)
  __DECLARE_VAR(BOOL,_TMP_GE104_OUT)
  __DECLARE_VAR(BOOL,_TMP_AND127_ENO)
  __DECLARE_VAR(BOOL,_TMP_AND127_OUT)
  __DECLARE_VAR(BOOL,_TMP_OR129_ENO)
  __DECLARE_VAR(BOOL,_TMP_OR129_OUT)

} PROGRAM0;

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain);
// Code part
void PROGRAM0_body__(PROGRAM0 *data__);
#endif //__POUS_H
