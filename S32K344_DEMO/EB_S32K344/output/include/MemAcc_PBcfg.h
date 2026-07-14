/*==================================================================================================
*   Project              : RTD AUTOSAR 4.9
*   Platform             : CORTEXM
*   Peripheral           : none
*   Dependencies         : MemAcc
*
*   Autosar Version      : 4.9.0
*   Autosar Revision     : ASR_REL_4_9_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 7.0.1
*   Build Version        : S32K3_RTD_7_0_1_D2602_ASR_REL_4_9_REV_0000_20260206
*
*   Copyright 2020 - 2026 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef MEMACC_PBCFG_H
#define MEMACC_PBCFG_H

/**
*   @file MemAcc_PBcfg.h
*
*   @addtogroup MEMACC
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "MemAcc_GeneralTypes.h"
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEMACC_PBCFG_VENDOR_ID                      43
#define MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION       4
#define MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION       9
#define MEMACC_PBCFG_AR_RELEASE_REVISION_VERSION    0
#define MEMACC_PBCFG_SW_MAJOR_VERSION               7
#define MEMACC_PBCFG_SW_MINOR_VERSION               0
#define MEMACC_PBCFG_SW_PATCH_VERSION               1


/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and MemAcc_GeneralTypes.h file are of the same vendor */
#if (MEMACC_PBCFG_VENDOR_ID != MEMACC_GENERALTYPES_VENDOR_ID)
    #error "MemAcc_PBcfg.h and MemAcc_GeneralTypes.h have different vendor ids"
#endif
/* Check if current file and MemAcc_GeneralTypes.h file are of the same Autosar version */
#if ((MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION    != MEMACC_GENERALTYPES_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION    != MEMACC_GENERALTYPES_AR_RELEASE_MINOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_REVISION_VERSION != MEMACC_GENERALTYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_PBcfg.h and MemAcc_GeneralTypes.h are different"
#endif
/* Check if current file and MemAcc_GeneralTypes.h file are of the same software version */
#if ((MEMACC_PBCFG_SW_MAJOR_VERSION != MEMACC_GENERALTYPES_SW_MAJOR_VERSION) || \
     (MEMACC_PBCFG_SW_MINOR_VERSION != MEMACC_GENERALTYPES_SW_MINOR_VERSION) || \
     (MEMACC_PBCFG_SW_PATCH_VERSION != MEMACC_GENERALTYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of MemAcc_PBcfg.h and MemAcc_GeneralTypes.h are different"
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/*Mem drivers hardware ID list*/
#define MEMACC_MEM_43_INFLS_DRIVER_ID                         (0U)

/* Number of hardware resources which are provided by Mem drivers */
#define MEMACC_HW_RESOURCE_COUNT                   (1U)

/* The unique numeric identifiers for each hardware resource */
#define MEMACC_MEM_43_INFLS_MEMINSTANCE_0_ID             (0U)

#define MEMACC_CONFIG_PB \
    extern const MemAcc_ConfigType MemAcc_Config;

/* MemAcc address areas unique id */
#define MEMACC_ADDRESS_AREA_0_ID       (0U)
#define MEMACC_ADDRESS_AREA_1_ID       (1U)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* MEMACC_PBCFG_H */
