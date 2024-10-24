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
// PROGRAM PROGRAM0S
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_LOCATED(UINT,SENSOR)
  __DECLARE_VAR(UINT,MIN_BAJ)
  __DECLARE_LOCATED(BOOL,LUZ)
  __DECLARE_LOCATED(BOOL,LUZ1)
  __DECLARE_VAR(UINT,MIN_ALT)
  __DECLARE_VAR(UINT,MIN_SUP)
  __DECLARE_VAR(UINT,TOPE_BAJ)
  __DECLARE_VAR(UINT,TOPE_ALT)
  __DECLARE_VAR(UINT,TOPE_SUP)
  __DECLARE_VAR(UINT,ACUM)
  __DECLARE_VAR(BOOL,TIMER_NORMAL)
  __DECLARE_VAR(BOOL,PROBARSUP)
  __DECLARE_VAR(BOOL,PROBARALT)
  __DECLARE_VAR(BOOL,INICIO)
  TON TON0;
  CTU_LINT CTU_LINT0;
  __DECLARE_VAR(UINT,_TMP_ADD82_OUT)
  __DECLARE_VAR(UINT,_TMP_DIV92_OUT)
  __DECLARE_VAR(BOOL,_TMP_NOT96_OUT)
  R_TRIG R_TRIG1;
  __DECLARE_VAR(BOOL,_TMP_ADD105_ENO)
  __DECLARE_VAR(UINT,_TMP_ADD105_OUT)
  __DECLARE_VAR(BOOL,_TMP_DIV106_ENO)
  __DECLARE_VAR(UINT,_TMP_DIV106_OUT)
  __DECLARE_VAR(BOOL,_TMP_GE109_ENO)
  __DECLARE_VAR(BOOL,_TMP_GE109_OUT)

} PROGRAM0S;

void PROGRAM0S_init__(PROGRAM0S *data__, BOOL retain);
// Code part
void PROGRAM0S_body__(PROGRAM0S *data__);
#endif //__POUS_H