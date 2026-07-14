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

#ifndef MEMACC_TYPES_H
#define MEMACC_TYPES_H

/**
*   @file MemAcc_Types.h
*
*   @addtogroup MEMACC Driver
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
#include "Std_Types.h"
#include "MemAcc_CfgDefines.h"
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEMACC_TYPES_VENDOR_ID                      43
#define MEMACC_TYPES_AR_RELEASE_MAJOR_VERSION       4
#define MEMACC_TYPES_AR_RELEASE_MINOR_VERSION       9
#define MEMACC_TYPES_AR_RELEASE_REVISION_VERSION    0
#define MEMACC_TYPES_SW_MAJOR_VERSION               7
#define MEMACC_TYPES_SW_MINOR_VERSION               0
#define MEMACC_TYPES_SW_PATCH_VERSION               1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Std_Types.h file are of the same version */
    #if ((MEMACC_TYPES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (MEMACC_TYPES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)\
        )
        #error "AutoSar Version Numbers of MemAcc_Types.h and Std_Types.h are different"
    #endif
#endif
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/* Define the type with exactly the size of a pointer for working with pointers */
#if (CPU_TYPE == CPU_TYPE_64)
    typedef uint64 MemAcc_UintPtrType;
#elif (CPU_TYPE == CPU_TYPE_32)
    typedef uint32 MemAcc_UintPtrType;
#else
    #error "Unsupported CPU_TYPE"
#endif


#define MEMACC_BURST_ERASE                        (1U << 0U)
#define MEMACC_BURST_WRITE                        (1U << 2U)


#define MEMACC_MEMSERVICE_COMPARE_API_ID           0x11U     /* Hardware-specific service ID for Compare API */

#define MEMACC_MEMDRIVER_ABI_VERSION               0x01U     /*ABI version of the Mem driver binary, it should be 0001*/
#define MEMACC_MEMDRIVER_RELOCATABLE_BINARY        0x01U     /*The Mem driver binary is relocatable */

/*! Specifies an idle hardware resource */
#define MEMACC_HW_RESOURCE_IDLE_U16                (0xFFFFU)
/*==================================================================================================
*                                             TYPEDEFS
==================================================================================================*/

/**
* @brief          Internal asynchronous job state transition
*                 MemAcc_JobStateType_enum
*/
typedef enum
{
    MEMACC_JOB_STATE_STARTING    = 0x00,   /**< @brief The job is pending to be processed             */
    MEMACC_JOB_STATE_PROCESSING  = 0x01,   /**< @brief The job is being processed                     */
    MEMACC_JOB_STATE_RETRYING    = 0x02,   /**< @brief The job is attempting a retry after a failure  */
    MEMACC_JOB_STATE_SUSPENDING  = 0x03,   /**< @brief The job is being suspended                     */
    MEMACC_JOB_STATE_RESUMING    = 0x04,   /**< @brief The job is being resumed                       */
    MEMACC_JOB_STATE_CANCELING   = 0x05,   /**< @brief The job is being canceled                      */
    MEMACC_JOB_STATE_LOCKING     = 0x06,   /**< @brief The job is being locked                        */
    MEMACC_JOB_STATE_STOP        = 0x07    /**< @brief The job is stop                                */
} MemAcc_JobStateType;

/*==================================================================================================
*                                            FUNCTION POINTER PROTOTYPE
==================================================================================================*/
/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          MemAcc_SectorBatchInfoType
* @details        Data structure for a sector batch infomation.
*/
typedef struct
{
    const uint32                   SectorSize;         /**< @brief Size of a sector in bytes in this sector batch (smallest erasable unit) */
    const uint32                   ReadMinSize;             /**< @brief Smallest readable unit in bytes                                                    */
    const uint32                   WritePageSize;      /**< @brief Size of a write page of this sector in bytes (smallest writeable unit)  */
    const uint32                   EraseBurstSize;     /**< @brief Size of sector erase burst in bytes (for improved performance)          */
    const uint32                   ReadMaxSize;             /**< @brief Largest readable unit in bytes                                                     */
    const uint32                   WriteBurstSize;     /**< @brief Size of page write/program burst in bytes (for improved performance)    */
} MemAcc_SectorBatchInfoType;

/**
* @brief          MemAcc_HwResourcesStatus
* @details        Runtime status of the Mem hardware resources to indicate they are idle or busy.
*/
typedef struct
{
    uint16 MemHwResources;
    uint16 MemHwResourcesLocked;
}MemAcc_HwResourcesStatus;


#if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)

/**
* @brief          Internal asynchronous job state transition
*                 MemAcc_JobStateType_enum
*/
typedef enum
{
    MEMACC_HARDWARE_SEMAPHORE = 0x00,    /**< @brief Hardware-based semaphore for synchronization */
    MEMACC_SOFTWARE_SEMAPHORE = 0x01,    /**< @brief software-based semaphore for synchronization */
    MEMACC_COMBINED_SEMAPHORE = 0x02,    /**< @brief Combined semaphore for synchronization */
} MemAcc_SemaphoreType;

/**
* @brief          MemAcc_SemaPhoreConfigType
* @details        Data structure for a sector batch infomation.
*/
typedef struct
{
    const MemAcc_SemaphoreType     SemaphoreType;
    const uint8                    HardwareSemaphoreGate;
    MemAcc_UintPtrType           * SoftwareSemaphorePtr;
    uint32                         SoftwareSemaphoreId;
    boolean                        AdvancedModeEnable;
} MemAcc_SemaphoreConfigType;
#endif
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

#endif /* MEMACC_TYPES_H */
