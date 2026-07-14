/*==================================================================================================
*   Project              : RTD AUTOSAR 4.9
*   Platform             : CORTEXM
*   Peripheral           : C40
*   Dependencies         : None
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

/**
 * @file        Mem_43_INFLS_Cfg.c
 *
 * @addtogroup  MEM_43_INFLS
 * implement    Mem_43_INFLS_Cfg.c_Artifact
 *
 * @{
 */

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mem_43_INFLS_Cfg.h"
#include "C40_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEM_43_INFLS_VENDOR_ID_CFG_C                          43
#define MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C           4
#define MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C           9
#define MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C        0
#define MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C                   7
#define MEM_43_INFLS_SW_MINOR_VERSION_CFG_C                   0
#define MEM_43_INFLS_SW_PATCH_VERSION_CFG_C                   1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID_CFG_C != MEM_43_INFLS_VENDOR_ID_CFG)
    #error "Mem_43_INFLS_Cfg.c and Mem_43_INFLS_Cfg.h have different vendor ids"
#endif
/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C    != MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C != MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_INFLS_Cfg.c and Mem_43_INFLS_Cfg.h are different"
#endif
/* Check if current file and Mem_43_INFLS_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C != MEM_43_INFLS_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION_CFG_C != MEM_43_INFLS_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION_CFG_C != MEM_43_INFLS_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_INFLS_Cfg.c and Mem_43_INFLS_Cfg.h are different"
#endif

/* Check if current file and C40_Ip_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID_CFG_C != C40_IP_VENDOR_ID_CFG)
    #error "Mem_43_INFLS_Cfg.c and C40_Ip_Cfg.h have different vendor ids"
#endif
/* Check if current file and C40_Ip_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != C40_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C    != C40_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C != C40_IP_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_INFLS_Cfg.c and C40_Ip_Cfg.h are different"
#endif
/* Check if current file and C40_Ip_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C != C40_IP_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION_CFG_C != C40_IP_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION_CFG_C != C40_IP_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_INFLS_Cfg.c and C40_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/

#define MEM_43_INFLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mem_43_INFLS_MemMap.h"

/* Mem Internal Units Configurations */
static const Mem_43_INFLS_InternalUnitType Mem_43_INFLS_InternalUnitsCfg[MEM_43_INFLS_INTERNAL_UNIT_COUNT] =
{
    {
        &C40_Ip_InitCfg                                    /* InternalConfig */
    }
};

/* Mem Devices Configurations */
static const Mem_43_INFLS_MemDeviceType Mem_43_INFLS_MemDevices =
{
    Mem_43_INFLS_InternalUnitsCfg                          /* InternalUnits */
};


/* Configuration of MemSectorBatch for MemInstance_INFLS */
static const Mem_43_INFLS_SectorBatchType Mem_43_INFLS_MemInstance_INFLS_SectorBatch[2U] =
{
/* If AUTOSAR R23-11 is used */
/* If AUTOSAR R23-11 is used */
    {
        /* MemSectorBatch_Dflash */
        268435456U,                                        /* StartAddress   */
        268566527U,                                        /* EndAddress     */
        8192U,                                             /* SectorSize     */
        512U,                                              /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        512U,                                              /* ReadBurstSize  */
        8U                                                 /* WriteBurstSize */
    },
/* If AUTOSAR R23-11 is used */
/* If AUTOSAR R23-11 is used */
    {
        /* MemSectorBatch_Pflash */
        4194304U,                                          /* StartAddress   */
        8388607U,                                          /* EndAddress     */
        8192U,                                             /* SectorSize     */
        512U,                                              /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        8192U,                                             /* EraseBurstSize */
        512U,                                              /* ReadBurstSize  */
        8U                                                 /* WriteBurstSize */
    }
};


/* Configuration of Mem Instances */
static const Mem_43_INFLS_MemInstanceType Mem_43_INFLS_MemInstances[MEM_43_INFLS_MEM_INSTANCE_COUNT] =
{
    {
        /* MemInstance_INFLS */
        MEM_43_INFLS_INSTANCE_0_ID,                        /* InstanceId       */
        2U,                                                /* SectorBatchCount */
        Mem_43_INFLS_MemInstance_INFLS_SectorBatch,        /* SectorBatches    */
#if (STD_ON == MEM_43_INFLS_HW_UTESTMODE_SERVICE)
        NULL_PTR,                                          /* UtestConfig      */
#endif
        0U                                                 /* MemUnitIndex     */
    }
};


/* Configuration of Mem_43_INFLS */
const Mem_43_INFLS_ConfigType Mem_43_INFLS_Config =
{
#if (STD_ON == MEM_43_INFLS_AC_LOAD_ON_JOB_START)
    (Mem_43_INFLS_AcErasePtrType)0x2042df00U,              /* MemAcErasePtr */
    (Mem_43_INFLS_AcWritePtrType)0x2042df00U,              /* MemAcWritePtr */
#endif
    NULL_PTR,                                              /* MemAcCallback */

    Mem_43_INFLS_MemInstances,                             /* MemInstances  */
    &Mem_43_INFLS_MemDevices,                              /* MemDevices    */
#if (STD_ON == MEM_43_INFLS_CHECK_CFG_CRC)
    4432U                                                  /* u16ConfigCrc  */
#endif
};


#define MEM_43_INFLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mem_43_INFLS_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

