#ifndef __customcode_Gnf9zNG3MZgyDhvwJHhw3B_h__
#define __customcode_Gnf9zNG3MZgyDhvwJHhw3B_h__

/* Include files */
#include "mex.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tmwtypes.h"


/* Helper definitions for DLL support */
#if defined _WIN32 
  #define DLL_EXPORT_CC    
#else
  #if __GNUC__ >= 4
    #define DLL_EXPORT_CC __attribute__ ((visibility ("default")))
  #else
    #define DLL_EXPORT_CC
  #endif
#endif
/* Custom Code from Simulation Target dialog */
#include "LED_Ctrl.h"
#include "ADC_userCode.h"

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
#define customcode_Gnf9zNG3MZgyDhvwJHhw3B_initializer()

#define customcode_Gnf9zNG3MZgyDhvwJHhw3B_terminator()
#ifdef __cplusplus
}
#endif

#endif

