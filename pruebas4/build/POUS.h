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
  __DECLARE_VAR(BOOL,TIMER)
  __DECLARE_VAR(BOOL,PROBAR_SIG)
  __DECLARE_VAR(BOOL,ENTRO)
  __DECLARE_VAR(BOOL,ENTRO0)
  __DECLARE_VAR(BOOL,TIMER_CORRIDO)
  __DECLARE_VAR(BOOL,ACUMULAR)
  __DECLARE_VAR(BOOL,HUBO_CAMBIO)
  __DECLARE_VAR(BOOL,LUZ1)
  __DECLARE_VAR(BOOL,LUZ2)
  __DECLARE_VAR(UINT,SENSOR)
  __DECLARE_VAR(UINT,ACUM)
  __DECLARE_VAR(UINT,TOPE_NORMAL)
  __DECLARE_VAR(UINT,TOPE_ALTO)
  __DECLARE_VAR(UINT,TOPE_SUPERIOR)
  __DECLARE_VAR(INT,ACTUAL)
  TON TON2;
  TP TP0;
  TOF TOF1;
  TP TP3;
  TON TON1;
  TON TON4;
  TON TON3;
  TON TON0;
  TON TON6;
  __DECLARE_VAR(BOOL,_TMP_ADD78_ENO)
  __DECLARE_VAR(UINT,_TMP_ADD78_OUT)
  __DECLARE_VAR(BOOL,_TMP_DIV72_ENO)
  __DECLARE_VAR(UINT,_TMP_DIV72_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ5_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ5_OUT)
  __DECLARE_VAR(BOOL,_TMP_GE83_ENO)
  __DECLARE_VAR(BOOL,_TMP_GE83_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD16_ENO)
  __DECLARE_VAR(INT,_TMP_ADD16_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ32_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ32_OUT)
  __DECLARE_VAR(BOOL,_TMP_GE55_ENO)
  __DECLARE_VAR(BOOL,_TMP_GE55_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD91_ENO)
  __DECLARE_VAR(INT,_TMP_ADD91_OUT)
  __DECLARE_VAR(BOOL,_TMP_LT97_ENO)
  __DECLARE_VAR(BOOL,_TMP_LT97_OUT)
  __DECLARE_VAR(BOOL,_TMP_SUB100_ENO)
  __DECLARE_VAR(INT,_TMP_SUB100_OUT)

} PROGRAM0;

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain);
// Code part
void PROGRAM0_body__(PROGRAM0 *data__);
#endif //__POUS_H