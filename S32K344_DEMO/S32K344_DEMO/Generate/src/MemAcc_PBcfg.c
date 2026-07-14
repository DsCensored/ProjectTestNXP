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

/**
*   @file MemAcc_PBcfg.c
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
#include "MemAcc_PBcfg.h"


#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED)
#if (STD_ON == MEMACC_HW_SEMAPHORE_AVAILABLE)
#include "CDD_Rm.h"
#endif /* #if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)*/
#endif /* #if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)*/

/* Mem dependencies */
#include "Mem_43_INFLS.h"
#include "SchM_Mem_43_INFLS.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEMACC_PBCFG_VENDOR_ID_C                      43
#define MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION_C       9
#define MEMACC_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define MEMACC_PBCFG_SW_MAJOR_VERSION_C               7
#define MEMACC_PBCFG_SW_MINOR_VERSION_C               0
#define MEMACC_PBCFG_SW_PATCH_VERSION_C               1


/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and MemAcc_PBcfg.h file are of the same vendor */
#if (MEMACC_PBCFG_VENDOR_ID_C != MEMACC_PBCFG_VENDOR_ID)
    #error "MemAcc_PBcfg.c and MemAcc_PBcfg.h have different vendor ids"
#endif
/* Check if current file and MemAcc_PBcfg.h file are of the same Autosar version */
#if ((MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION_C    != MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_REVISION_VERSION_C != MEMACC_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_PBcfg.c and MemAcc_PBcfg.h are different"
#endif
/* Check if current file and MemAcc_PBcfg.h file are of the same software version */
#if ((MEMACC_PBCFG_SW_MAJOR_VERSION_C != MEMACC_PBCFG_SW_MAJOR_VERSION) || \
     (MEMACC_PBCFG_SW_MINOR_VERSION_C != MEMACC_PBCFG_SW_MINOR_VERSION) || \
     (MEMACC_PBCFG_SW_PATCH_VERSION_C != MEMACC_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of MemAcc_PBcfg.c and MemAcc_PBcfg.h are different"
#endif
#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED)
#if (STD_ON == MEMACC_HW_SEMAPHORE_AVAILABLE)
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if current file and CDD_Rm.h header file are of the same Autosar version */
#if ((MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION_C != RM_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION_C != RM_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_PBcfg.c and CDD_Rm.h are different"
#endif
#endif
#endif
#endif /* #if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)*/
/* Check if current file and Mem_43_INFLS.h file are of the same vendor */
#if (MEMACC_PBCFG_VENDOR_ID_C != MEM_43_INFLS_VENDOR_ID)
    #error "MemAcc_PBcfg.c and Mem_43_INFLS.h have different vendor ids"
#endif
/* Check if current file and Mem_43_INFLS.h file are of the same Autosar version */
#if ((MEMACC_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_MINOR_VERSION_C    != MEM_43_INFLS_AR_RELEASE_MINOR_VERSION) || \
     (MEMACC_PBCFG_AR_RELEASE_REVISION_VERSION_C != MEM_43_INFLS_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_PBcfg.c and Mem_43_INFLS.h are different"
#endif
/* Check if current file and Mem_43_INFLS.h file are of the same software version */
#if ((MEMACC_PBCFG_SW_MAJOR_VERSION_C != MEM_43_INFLS_SW_MAJOR_VERSION) || \
     (MEMACC_PBCFG_SW_MINOR_VERSION_C != MEM_43_INFLS_SW_MINOR_VERSION) || \
     (MEMACC_PBCFG_SW_PATCH_VERSION_C != MEM_43_INFLS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of MemAcc_PBcfg.c and Mem_43_INFLS.h are different"
#endif

/*==================================================================================================
*                                       INTERNAL RUNTIME INFORMATION
==================================================================================================*/

#define MEMACC_START_SEC_CODE
#include "MemAcc_MemMap.h"
#define MEMACC_STOP_SEC_CODE
#include "MemAcc_MemMap.h"
#define MEMACC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemAcc_MemMap.h"

/* Information of the current processing job of each address area */
static MemAcc_JobRuntimeInfoType    MemAcc_JobRuntimeInfo[2];

#define MEMACC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemAcc_MemMap.h"

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
#define MEMACC_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemAcc_MemMap.h"

/* Configuration of mem driver information */
static MemAcc_MemBinaryHeaderType MemAcc_MemApis[1] =
{
    {
        /* &Mem_43_INFLS */
        0xFFFFFFFFU,                                                                                /* UniqueId               */
        0xFFFFFFFFU,                                                                                /* Flags                  */
        0xFFFFFFFFU,                                                                                /* Header                 */
        0xFFFFFFFFU,                                                                                /* Delimiter              */
        (MemAcc_MemInitFuncType)&Mem_43_INFLS_Init,                                                 /* InitFunc               */
        (MemAcc_MemDeInitFuncType)&Mem_43_INFLS_DeInit,                                             /* DeInitFunc             */
        (MemAcc_MemMainFuncType)&Mem_43_INFLS_MainFunction,                                         /* MainFunc               */
        (MemAcc_MemGetJobResultFuncType)&Mem_43_INFLS_GetJobResult,                                 /* GetJobResultFunc       */
        (MemAcc_MemReadFuncType)&Mem_43_INFLS_Read,                                                 /* ReadFunc               */
        (MemAcc_MemWriteFuncType)&Mem_43_INFLS_Write,                                               /* WriteFunc              */
        (MemAcc_MemEraseFuncType)&Mem_43_INFLS_Erase,                                               /* EraseFunc              */
        (MemAcc_MemBlankCheckFuncType)&Mem_43_INFLS_BlankCheck,                                     /* BlankCheckFunc         */
        NULL_PTR,                                                                                   /* PropagateErrorFunc     */
        NULL_PTR,                                                                                   /* SuspendFunc            */
        NULL_PTR,                                                                                   /* ResumeFunc             */
        (MemAcc_MemHwSpecificServiceFuncType)&Mem_43_INFLS_HwSpecificService                        /* HwSpecificServiceFunc  */
    }
};
#define MEMACC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemAcc_MemMap.h"

#define MEMACC_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "MemAcc_MemMap.h"

/* Runtime status of the Mem hardware resources to indicate they are idle or busy */
static MemAcc_HwResourcesStatus MemAcc_HardwareResourcesStatus[1U] =
{
    {
        MEMACC_HW_RESOURCE_IDLE_U16,                                                                /* hwResources         */
        MEMACC_HW_RESOURCE_IDLE_U16                                                                 /* hwResourcesLocked        */
    }
};

#define MEMACC_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "MemAcc_MemMap.h"

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"
/* Configuration of mem driver invocation type */
static const MemAcc_MemInvocationType MemAcc_MemInvocation[1U] =
{
    MEMACC_INDIRECT_STATIC
};
/* Configuration of sub address areas */
static const MemAcc_SubAddressAreaType MemAcc_MemAccAddressAreaConfiguration_Dflash_SubAreas[1U] =
{
    {
        /* MemAccSubAddressAreaConfiguration_Dflash */
        0U,                                                                                         /* LogicalStartAddress  */
        268435456U,                                                                                 /* PhysicalStartAddress */
        131072U,                                                                                    /* Length               */
        0U,                                                                                         /* NumOfEraseRetries    */
        0U,                                                                                         /* NumOfWriteRetries    */
        0U | MEMACC_BURST_ERASE | MEMACC_BURST_WRITE,                                               /* BurstSettings        */
        MEMACC_INDIRECT_STATIC,                                                                     /* MemInvocation        */
        &(MemAcc_MemApis[MEMACC_MEM_43_INFLS_DRIVER_ID]),                                           /* MemApi               */
        0U,                                                                                         /* MemInstanceId        */
        {
            8192U,                                                                                  /* SectorEraseSize           */
            512U,                                                                                   /* ReadMinSize              */
            8U,                                                                                     /* WritePageSize             */
            8192U,                                                                                  /* SectorEraseBurstSize      */
            512U,                                                                                   /* ReadMaxSize         */
            8U                                                                                      /* WritePageBurstSize        */
        },
        MEMACC_MEM_43_INFLS_MEMINSTANCE_0_ID,                                                       /* MemoryHardwareInstanceId  */
        MEMACC_MEM_43_INFLS_DRIVER_ID                                                               /* MemoryDriverId            */
    }
};

static const MemAcc_SubAddressAreaType MemAcc_MemAccAddressAreaConfiguration_Pflash_SubAreas[1U] =
{
    {
        /* MemAccSubAddressAreaConfiguration_Pflash */
        0U,                                                                                         /* LogicalStartAddress  */
        4194304U,                                                                                   /* PhysicalStartAddress */
        4194304U,                                                                                   /* Length               */
        0U,                                                                                         /* NumOfEraseRetries    */
        0U,                                                                                         /* NumOfWriteRetries    */
        0U | MEMACC_BURST_ERASE | MEMACC_BURST_WRITE,                                               /* BurstSettings        */
        MEMACC_INDIRECT_STATIC,                                                                     /* MemInvocation        */
        &(MemAcc_MemApis[MEMACC_MEM_43_INFLS_DRIVER_ID]),                                           /* MemApi               */
        0U,                                                                                         /* MemInstanceId        */
        {
            8192U,                                                                                  /* SectorEraseSize           */
            512U,                                                                                   /* ReadMinSize              */
            8U,                                                                                     /* WritePageSize             */
            8192U,                                                                                  /* SectorEraseBurstSize      */
            512U,                                                                                   /* ReadMaxSize         */
            8U                                                                                      /* WritePageBurstSize        */
        },
        MEMACC_MEM_43_INFLS_MEMINSTANCE_0_ID,                                                       /* MemoryHardwareInstanceId  */
        MEMACC_MEM_43_INFLS_DRIVER_ID                                                               /* MemoryDriverId            */
    }
};



/* Configuration of address areas */
static const MemAcc_AddressAreaType MemAcc_AddressAreas[2] =
{
    {
        /* MemAccAddressAreaConfiguration_Dflash */
        0U,                                                                                         /* AreaId          */
        131072U,                                                                                    /* AreaLength      */
        0U,                                                                                         /* Priority        */
        4U,                                                                                         /* BufferAlignment */
        NULL_PTR,                                                                                   /* JobEndNotif     */
        1U,                                                                                         /* SubAreaCount    */
        MemAcc_MemAccAddressAreaConfiguration_Dflash_SubAreas                                       /* SubAreas        */
    },
    {
        /* MemAccAddressAreaConfiguration_Pflash */
        1U,                                                                                         /* AreaId          */
        4194304U,                                                                                   /* AreaLength      */
        0U,                                                                                         /* Priority        */
        4U,                                                                                         /* BufferAlignment */
        NULL_PTR,                                                                                   /* JobEndNotif     */
        1U,                                                                                         /* SubAreaCount    */
        MemAcc_MemAccAddressAreaConfiguration_Pflash_SubAreas                                       /* SubAreas        */
    }
};

/* Configuration of MemAcc */
const MemAcc_ConfigType MemAcc_Config =
{
    2U,                                                                                             /* AddressAreaCount */
    MemAcc_AddressAreas,                                                                            /* AddressAreas     */
    MemAcc_JobRuntimeInfo,                                                                          /* JobRuntimeInfo   */
    1U,                                                                                             /* MemDriverCount   */
    MemAcc_MemApis,                                                                                 /* MemApis          */
    MemAcc_MemInvocation,                                                                           /* MemInvocation    */
    MemAcc_HardwareResourcesStatus,                                                                 /* HwResourcesStatus    */
    MEMACC_HW_RESOURCE_COUNT                                                                        /* HwResourcesCount    */

};

#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @}*/
