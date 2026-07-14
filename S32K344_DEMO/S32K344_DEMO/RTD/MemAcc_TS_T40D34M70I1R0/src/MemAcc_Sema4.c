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
*   @file MemAcc_Sema4.c
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
#include "MemAcc_GeneralTypes.h"
#include "MemAcc_Sema4.h"
#include "MemAcc_Cfg.h"

#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED)

#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
#include "CDD_Rm.h"
#endif

#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
#include "OsIf_Software_Semaphore.h"
#endif

#endif /* #if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)*/

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define MEMACC_SEMA4_VENDOR_ID_C                      43
#define MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION_C       4
#define MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION_C       9
#define MEMACC_SEMA4_AR_RELEASE_REVISION_VERSION_C    0
#define MEMACC_SEMA4_SW_MAJOR_VERSION_C               7
#define MEMACC_SEMA4_SW_MINOR_VERSION_C               0
#define MEMACC_SEMA4_SW_PATCH_VERSION_C               1


/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and MemAcc_Cfg.h file are of the same vendor */
#if (MEMACC_SEMA4_VENDOR_ID_C != MEMACC_VENDOR_ID_CFG)
    #error "MemAcc_Sema4.c and MemAcc_Cfg.h have different vendor ids"
#endif
/* Check if current file and MemAcc_Cfg.h file are of the same Autosar version */
#if ((MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION_C    != MEMACC_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION_C    != MEMACC_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEMACC_SEMA4_AR_RELEASE_REVISION_VERSION_C != MEMACC_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of MemAcc_Sema4.c and MemAcc_Cfg.h are different"
#endif
/* Check if current file and MemAcc_Cfg.h file are of the same software version */
#if ((MEMACC_SEMA4_SW_MAJOR_VERSION_C != MEMACC_SW_MAJOR_VERSION_CFG) || \
     (MEMACC_SEMA4_SW_MINOR_VERSION_C != MEMACC_SW_MINOR_VERSION_CFG) || \
     (MEMACC_SEMA4_SW_PATCH_VERSION_C != MEMACC_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of MemAcc_Sema4.c and MemAcc_Cfg.h are different"
#endif

#if (MEMACC_SEMA4_VENDOR_ID_C != MEMACC_SEMA4_VENDOR_ID)
    #error "MemAcc_Sema4.c and MemAcc_Sema4.h have different vendor ids"
#endif
/* Check if current file and MemAcc_Sema4.h file are of the same Autosar version */
#if ((MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION_C    != MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION_C    != MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION) || \
     (MEMACC_SEMA4_AR_RELEASE_REVISION_VERSION_C != MEMACC_SEMA4_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_Sema4.c and MemAcc_Sema4.h are different"
#endif

/* Check if current file and MemAcc_Sema4.h file are of the same software version */
#if ((MEMACC_SEMA4_SW_MAJOR_VERSION_C != MEMACC_SEMA4_SW_MAJOR_VERSION) || \
     (MEMACC_SEMA4_SW_MINOR_VERSION_C != MEMACC_SEMA4_SW_MINOR_VERSION) || \
     (MEMACC_SEMA4_SW_PATCH_VERSION_C != MEMACC_SEMA4_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of MemAcc_Sema4.c and MemAcc_Sema4.h are different"
#endif

#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED)
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK

#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
/* Check if header file and CDD_Rm.h header file are of the same Autosar version */
#if ((MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION_C != RM_AR_RELEASE_MAJOR_VERSION) || \
        (MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION_C != RM_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_Sema4.c and CDD_Rm.h are different"
#endif
#endif

#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
/* Check if header file and OsIf_Software_Semaphore.h header file are of the same Autosar version */
#if ((MEMACC_SEMA4_AR_RELEASE_MAJOR_VERSION_C != OSIF_SOFTWARE_SEMAPHORE_AR_RELEASE_MAJOR_VERSION_H) || \
        (MEMACC_SEMA4_AR_RELEASE_MINOR_VERSION_C != OSIF_SOFTWARE_SEMAPHORE_AR_RELEASE_MINOR_VERSION_H) \
    )
    #error "AutoSar Version Numbers of MemAcc_Sema4.c and OsIf_Software_Semaphore.h are different"
#endif
#endif

#endif
#endif /* #if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)*/
/*==================================================================================================
 *                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/
#if (STD_ON == MEMACC_MULTI_PARTITION_TYPE_1_ENABLED)

#define MEMACC_SEMA4_INVALID_GATE    0xFFU
#define MEMACC_SEMA4_INVALID_ADDRESS 0xFFFFFFFFU
#define MEMACC_SEMA4_UNLOCKED_VALUE  0U

#if(MEMACC_MULTI_PARTITION_ADVANCE_ENABLED == STD_ON)

#define MEMACC_INTENAL_FLASH_LOCK_ALL                   0x00U
#define MEMACC_INTENAL_FLASH_LOCK_WRITE_ERASE           0x01U
#define MEMACC_INTENAL_FLASH_NO_LOCK                    0xFFU
#define MEMACC_INTENAL_FLASH_NUMBER_OF_SW_SEMAPHORE     11U

/*!
 * @brief Enumeration of Blocks of memory internal flash.
 */
typedef enum
{
    MEMACC_INTENAL_FLASH_INVALID_BLOCK      = 0x00U,  /*!< Invalid block identifier */
    MEMACC_INTENAL_FLASH_UTEST_BLOCK        = 0x01U,  /*!< block Utest         */
    MEMACC_INTENAL_FLASH_DATA_BLOCK         = 0x02U,  /*!< data block          */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_0       = 0x03U,  /*!< code block number 0 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_1       = 0x04U,  /*!< code block number 1 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_2       = 0x05U,  /*!< code block number 2 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_3       = 0x06U,  /*!< code block number 3 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_4       = 0x07U,  /*!< code block number 4 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_5       = 0x08U,  /*!< code block number 5 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_6       = 0x09U,  /*!< code block number 6 */
    MEMACC_INTENAL_FLASH_CODE_BLOCK_7       = 0x0AU,  /*!< code block number 7 */
} MemAcc_FlashBlocksNumberType;

typedef struct
{
    MemAcc_LengthType                    Address;
    MemAcc_FlashBlocksNumberType         BlockNumber;
} MemAcc_AddrToBlockConfigType;
#endif

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

#define MEMACC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemAcc_MemMap.h"
/* Pointer to current memacc module configuration set */
static const MemAcc_SemaphoreConfigType          *MemAcc_pSemaphoreConfigPtr;

#define MEMACC_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemAcc_MemMap.h"

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#define MEMACC_START_SEC_CODE
#include "MemAcc_MemMap.h"

/**
 * @brief Request lock for hardware semaphore gate
 * @details This function attempts to acquire a hardware semaphore lock by first checking
 *          if the semaphore gate is free, and if so, attempts to lock it. If the gate
 *          is already locked by another core, the function returns an error.
 *
 * @param[in] HwSema4Gate - Hardware semaphore gate identifier to be locked
 *
 * @return Std_ReturnType
 * @retval E_OK - Semaphore successfully locked and exclusive access granted
 * @retval E_NOT_OK - Semaphore is already locked by another core or lock operation failed
 *
 * @pre Hardware semaphore must be available and properly initialized
 * @post If successful, the calling core has exclusive access to the semaphore gate
 *
 */
#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
static Std_ReturnType MemAcc_HardwareSema4_RequestLock(uint8 HwSema4Gate)
{
    uint32 GetGateStatus;
    Std_ReturnType RetVal;

    GetGateStatus = Rm_SemaphoreGetStatus(HwSema4Gate);
    if (RM_SEMAPHORE_FREE == GetGateStatus)
    {
        RetVal = Rm_SemaphoreLockGate(HwSema4Gate);
    }
    else
    {
        /* The other core has the job SEMA4. */
        RetVal = E_NOT_OK;
    }
    return RetVal;
}

/**
 * @brief Release lock for hardware semaphore gate
 * @details This function releases a hardware semaphore lock by first checking if the
 *          semaphore is currently held by this core (domain). If the current domain ID
 *          matches the semaphore status, it unlocks the gate.
 *
 * @param[in] HwSema4Gate - Hardware semaphore gate identifier to be released
 *
 * @return void
 *
 * @pre Hardware semaphore must be available and properly initialized
 * @post If the semaphore was held by this core, it is released and available for other cores
 *
 */
static void  MemAcc_HardwareSema4_ReleaseLock(uint8 HwSema4Gate)
{
    uint8 domainID = (uint8)Rm_XrdcGetDomainID(0U);
    uint32 semaphoreStatus;

    /* Get the status of the sema4 gate*/
    semaphoreStatus = Rm_SemaphoreGetStatus(HwSema4Gate);

    /* If the internal job SEMA4 is held by this core, clear it. */
    if (domainID == semaphoreStatus)
    {
        (void)Rm_SemaphoreUnlockGate(HwSema4Gate);
    }
}

#endif /* (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON) */

#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
/**
 * @brief Request lock for software semaphore
 * @details This function attempts to acquire a software semaphore lock by first checking
 *          if the semaphore is in unlocked state, lock it with the specified lock value.
 *          This provides software-based mutuals exclusion between partitions on one core.
 *
 * @param[in] SwSemaphore - Pointer to software semaphore variable
 * @param[in] SwSema4LockValue - Value to be used for locking the semaphore (typically partition ID)
 *
 * @return Std_ReturnType
 * @retval E_OK - Software semaphore successfully locked and exclusive access granted
 * @retval E_NOT_OK - Semaphore is already locked or lock operation failed
 *
 * @pre SwSemaphore pointer must be valid and point to accessible memory
 * @post If successful, the software semaphore is locked with the specified value
 *
 */
static Std_ReturnType MemAcc_SoftwareSema4_RequestLock( MemAcc_UintPtrType *SwSemaphore, uint32 SwSema4LockValue)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_NOT_OK;

    if (*SwSemaphore == MEMACC_SEMA4_UNLOCKED_VALUE)
    {
        if (TRUE == OsIf_Software_Semaphore_Lock(SwSemaphore, SwSema4LockValue))
        {
            RetVal = E_OK;
        }
    }
    return RetVal;
}
#endif /* (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON) */

/**
 * @brief
 * @details
 *
 * @param[in]        void
 *
 * @return           MemAcc_Sema4_RequestLock
 * @retval           E_NOT_OK         Error during attempt of getting exclusive access(abnormal sema4 behaviour, incorrect exclusive area implementation, etc)
 * @retval           E_OK       Sema4 taken, exclusive access granted
 *
 *
 * @pre              The module has to be initialized and not busy.
 * @pre              The requested job has to be set.
 * @pre              The requested priority for this job has to be set(Normal, High prio).
 * @post             Status of current job is known: error,timeout -> abort job, pending -> delay job, granted -> start/continue job in hardware.
 *
 */
Std_ReturnType MemAcc_Sema4_RequestLock(uint8 MemHwResource)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
    MemAcc_UintPtrType *SwSemaphore;
    uint32 SwSema4LockValue;
#endif

#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
    /* Hardware semaphore lock for MEMACC_HARDWARE_SEMAPHORE and MEMACC_COMBINED_SEMAPHORE*/
    if( MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_SOFTWARE_SEMAPHORE )
    {
        if(MEMACC_SEMA4_INVALID_GATE != MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate)
        {
            RetVal = MemAcc_HardwareSema4_RequestLock(MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate);
        }
    }
    if(E_OK == RetVal)
#endif
    {
#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
        if(MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_HARDWARE_SEMAPHORE)
        {
            SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;
            SwSemaphore      = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr;
            RetVal           = MemAcc_SoftwareSema4_RequestLock(SwSemaphore, SwSema4LockValue);
#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
            /* Unlock hardware semaphore if software semaphore lock fails when it's combined semaphore type */
            if( (E_OK != RetVal) && (MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType == MEMACC_COMBINED_SEMAPHORE))
            {
                MemAcc_HardwareSema4_ReleaseLock(MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate);
            }
#endif
        }
#else
    /*Do nothing */
#endif
    }

    return RetVal;
}
  /**
 * @brief Release semaphore locks for a memory hardware resource
 * @details Cleanup function that releases all semaphore locks (hardware and/or software)
 *          acquired by this core for the specified memory hardware resource. This function
 *          is called at the end of jobs (successful or erroneous) and in canceled jobs to
 *          ensure proper cleanup of all acquired semaphores.
 *
 * @param[in] MemHwResource - Memory hardware resource identifier
 *
 * @return void
 *
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @pre MemHwResource must be a valid hardware resource index
 * @post All semaphores held by this core for the resource are released
 *
 */
void MemAcc_Sema4_ReleaseLock(uint8 MemHwResource)
{
#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
    MemAcc_UintPtrType *pSwSemaphore;
    uint32 SwSema4LockValue;
#endif

#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
    /*Release lock for hardware semaphore*/
    if((MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_SOFTWARE_SEMAPHORE))
    {
        if(MEMACC_SEMA4_INVALID_GATE != MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate)
        {
            MemAcc_HardwareSema4_ReleaseLock(MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate);
        }
    }
#endif
#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
    /*Release lock for software semaphore*/
    if((MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_HARDWARE_SEMAPHORE))
    {
        SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;
        pSwSemaphore      = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr;

        OsIf_Software_Semaphore_Unlock(pSwSemaphore, SwSema4LockValue);
    }
#endif
}

/**
 * @brief Check if semaphore is locked by current core
 * @details Verifies if the semaphore for the specified memory hardware resource is currently
 *          locked by this core. For hardware semaphores, it checks domain ownership. For
 *          software semaphores, it verifies the lock value matches the current instance ID.
 *
 * @param[in] MemHwResource - Memory hardware resource identifier
 *
 * @return Std_ReturnType
 * @retval E_OK - Semaphore is locked by this core
 * @retval E_NOT_OK - Semaphore is not locked by this core or verification failed
 *
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @pre MemHwResource must be a valid hardware resource index
 * @post No state change - read-only operation
 *
 */
Std_ReturnType MemAcc_Sema4_IsLocked(uint8 MemHwResource)
{
    Std_ReturnType RetVal = E_OK;

#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
    MemAcc_UintPtrType *pSwSemaphore;
    uint32 SwSema4LockValue;
#endif

#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
    uint8 domainID;
    uint32 semaphoreStatus;

    if((MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_SOFTWARE_SEMAPHORE))
    {
        if(MEMACC_SEMA4_INVALID_GATE != MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate)
        {
            domainID = (uint8)Rm_XrdcGetDomainID(0U);
            /* Get the status of the sema4 gate*/
            semaphoreStatus = Rm_SemaphoreGetStatus(MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate);

            /*Check if the hardware Sema4 is held by this core */
            if (domainID == semaphoreStatus)
            {
                RetVal = (Std_ReturnType)E_OK;
            }
            else
            {
                RetVal = (Std_ReturnType)E_NOT_OK;
            }
        }
    }

    /*Check lock for software semaphore*/
    if(E_OK == RetVal)
#endif
    {
#if (MEMACC_SW_SEMAPHORE_AVAILABLE == STD_ON)
        if(MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_HARDWARE_SEMAPHORE)
        {
            SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;
            pSwSemaphore     = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr;

            if(SwSema4LockValue != (uint32)(*pSwSemaphore))
            {
                RetVal = (Std_ReturnType)E_NOT_OK;
            }
        }
#else
    /*Do nothing */
#endif
    }
    return RetVal;
}

/**
 * @brief Initialize and acquire semaphore locks for all hardware resources
 * @details Initializes the semaphore configuration pointer and attempts to acquire
 *          semaphore locks for all configured hardware resources during module
 *          initialization. This ensures exclusive access during initialization phase.
 *
 * @param[in] void
 *
 * @return Std_ReturnType
 * @retval E_OK - All semaphore locks successfully acquired
 * @retval E_NOT_OK - Failed to acquire one or more semaphore locks
 *
 * @pre MemAcc_pConfigPtr must be properly initialized with valid configuration
 * @post If successful, all hardware resources are locked for initialization
 * @post If failed, some resources may remain locked (cleanup required)
 *
 */
Std_ReturnType MemAcc_Sema4_InitLock(void)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    uint8 index = 0U;

    /* Store configuration set structure */
    MemAcc_pSemaphoreConfigPtr = MemAcc_pConfigPtr->SemaphoreConfig;

    for (index = 0; index < MemAcc_pConfigPtr->HwResourceCount; index++)
    {
        /* Request the hardware resource in multi core mode */
        RetVal = MemAcc_Sema4_RequestLock(index);

        if (E_NOT_OK == RetVal)
        {
            break;
        }
    }
    return RetVal;
}

/**
 * @brief Release all semaphore locks acquired during initialization
 * @details Cleanup function that releases all semaphore locks that were acquired
 *          during the initialization phase. This function is called after hardware
 *          initialization is complete to free up resources for normal operation.
 *
 * @param[in] void
 *
 * @return void
 *
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @pre Hardware resources should have been previously locked via MemAcc_Sema4_InitLock
 * @post All hardware resource semaphores are released and available for normal operation
 *
 */
void MemAcc_Sema4_InitUnLock(void)
{
    uint8 index = 0U;

    for (index = 0; index < MemAcc_pConfigPtr->HwResourceCount; index++)
    {
        /* Release the hardware resource in multi core mode */
        (void)MemAcc_Sema4_ReleaseLock(index);
    }
}

#if(MEMACC_MULTI_PARTITION_ADVANCE_ENABLED == STD_ON)

/**
 * @brief Get flash block number from address of the job runtime information
 * @details Hardware-specific service that determines the flash block number based on
 *          the physical start address from the job information. Uses the memory driver's
 *          hardware-specific service interface to perform address-to-block translation.
 *
 * @param[in] JobInfo - Pointer to job runtime information containing address details
 *
 * @return MemAcc_FlashBlocksNumberType
 * @retval Valid block number - Successfully determined the flash block
 * @retval MEMACC_INTENAL_FLASH_INVALID_BLOCK - Failed to determine block or invalid address
 *
 * @pre JobInfo must be valid with properly initialized SubArea and MemApi
 * @pre Hardware-specific service function must be available
 * @post No state change - read-only operation
 *
 */
static MemAcc_FlashBlocksNumberType MemAcc_CallMemHwSpecificServiceAddressToBlock(const MemAcc_JobRuntimeInfoType *JobInfo)
{
    MemAcc_MemHwSpecificServiceFuncType MemHwSpecificServiceFunc  = JobInfo->SubArea->MemApi->HwSpecificServiceFunc;
    Std_ReturnType RetVal;
    MemAcc_AddrToBlockConfigType BlockConfig;
    BlockConfig.Address = JobInfo->SubArea->PhysicalStartAddress;
    uint8 * DataPtr = (uint8 *)&BlockConfig;
    MemAcc_LengthType BlockLength = 2U;

    /* Call Mem Hw Specific Service */
    RetVal = MemHwSpecificServiceFunc(JobInfo->SubArea->MemInstanceId, 0x13, DataPtr, &BlockLength);
    if(RetVal != E_OK)
    {
        BlockConfig.BlockNumber = MEMACC_INTENAL_FLASH_INVALID_BLOCK;
    }
    return BlockConfig.BlockNumber;
}

/**
 * @brief Release all software semaphore locks in advanced mode
 * @details Advanced mode cleanup function that releases all software semaphore locks
 *          that are currently held by the current module instance. Iterates through
 *          all software semaphore channels and unlocks those matching the instance ID.
 *
 * @param[in] MemHwResource - Memory hardware resource identifier
 *
 * @return void
 *
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @pre MemHwResource must be a valid hardware resource index
 * @post All software semaphores held by this instance are released
 *
 */
void MemAcc_Sema4_ReleaseLockAdvancedMode(uint8 MemHwResource)
{
    uint32 SwSema4LockValue;
    MemAcc_UintPtrType *SwSemaphore;
    uint32 SW_sema4_Index;

    SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;
    /* Unlock all semaphore number, if they are currently locked by current module instance*/
    for(SW_sema4_Index = 0; SW_sema4_Index < MEMACC_INTENAL_FLASH_NUMBER_OF_SW_SEMAPHORE; SW_sema4_Index++)
    {
        SwSemaphore = &(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[SW_sema4_Index]);
        if(SwSema4LockValue == (uint32)(*SwSemaphore))
        {
            OsIf_Software_Semaphore_Unlock(SwSemaphore, SwSema4LockValue);
        }
    }
}

/**
 * @brief Perform advanced semaphore locking with job and block granularity
 * @details Advanced locking mechanism that handles both job-level and block-level
 *          semaphore locking. Supports different locking strategies including lock-all,
 *          block-specific, and job-specific locking with proper conflict detection.
 *
 * @param[in] MemHwResource - Memory hardware resource identifier
 * @param[in] Job_To_Lock - Job type semaphore to lock (or MEMACC_INTENAL_FLASH_NO_LOCK)
 * @param[in] Block_ToLock - Block semaphore to lock (or MEMACC_INTENAL_FLASH_NO_LOCK)
 *
 * @return Std_ReturnType
 * @retval E_OK - Successfully acquired all requested locks
 * @retval E_NOT_OK - Failed to acquire locks due to conflicts or errors
 *
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @pre Hardware semaphore must be available if enabled
 * @post If successful, requested semaphores are locked; if failed, partial locks are cleaned up
 *
 */
static Std_ReturnType MemAcc_Sema4_PerformLockAdvanced(uint8 MemHwResource, uint8 Job_To_Lock, uint8 Block_ToLock)
{
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    uint32 SwSema4LockValue;
    MemAcc_UintPtrType *SwSemaphore;
    uint32 SW_sema4_Index;

    /* Lock HW semaphore first*/
#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
    if((MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_SOFTWARE_SEMAPHORE))
    {
        RetVal = MemAcc_HardwareSema4_RequestLock(MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate);
    }
    if(E_OK == RetVal)
#endif
    {
        /*For the request lock all, must check that all block is not locked */
        if(Job_To_Lock == MEMACC_INTENAL_FLASH_LOCK_ALL)
        {
            for(SW_sema4_Index = 0; SW_sema4_Index < MEMACC_INTENAL_FLASH_NUMBER_OF_SW_SEMAPHORE; SW_sema4_Index++)
            {
                if(MEMACC_SEMA4_UNLOCKED_VALUE != (uint32)(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[SW_sema4_Index]))
                {
                    RetVal = E_NOT_OK;
                    break;
                }
            }
        }
        else
        {
            /*Check the "lockAll" semaphore channel is not locked */
            if(MEMACC_SEMA4_UNLOCKED_VALUE != (uint32)(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[MEMACC_INTENAL_FLASH_LOCK_ALL]))
            {
                RetVal = E_NOT_OK;
            }
        }

        /* Lock the semaphore for the requested block*/
        if ((RetVal == E_OK)&&(Block_ToLock != MEMACC_INTENAL_FLASH_NO_LOCK))
        {
            SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;
            SwSemaphore      = &MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[Block_ToLock];
            RetVal           = MemAcc_SoftwareSema4_RequestLock(SwSemaphore, SwSema4LockValue);
        }

        /* Lock the semaphore for the requested job*/
        if ((RetVal == E_OK) &&(Job_To_Lock != MEMACC_INTENAL_FLASH_NO_LOCK))
        {
            SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;
            SwSemaphore      = &MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[Job_To_Lock];
            RetVal           = MemAcc_SoftwareSema4_RequestLock(SwSemaphore, SwSema4LockValue);
            if (RetVal != E_OK)
            {
                /*If lock job fail, unlock the locked block*/
                SwSemaphore  = &MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[Block_ToLock];
                OsIf_Software_Semaphore_Unlock(SwSemaphore, SwSema4LockValue);
            }
        }
    }

#if (MEMACC_HW_SEMAPHORE_AVAILABLE == STD_ON)
    if((MemAcc_pSemaphoreConfigPtr[MemHwResource].SemaphoreType != MEMACC_SOFTWARE_SEMAPHORE))
    {
        MemAcc_HardwareSema4_ReleaseLock(MemAcc_pSemaphoreConfigPtr[MemHwResource].HardwareSemaphoreGate);
    }
#endif
    return RetVal;
}

/**
 * @brief Request semaphore locks in advanced mode based on job type
 * @details Advanced mode semaphore locking that determines the appropriate locking
 *          strategy based on job type and flash block. Different job types require
 *          different levels of locking granularity for optimal concurrency.
 *
 * @param[in] JobInfo - Pointer to job runtime information
 *
 * @return Std_ReturnType
 * @retval E_OK - Successfully acquired appropriate locks for the job type
 * @retval E_NOT_OK - Failed to acquire locks or unknown job type
 *
 * @pre JobInfo must be valid with properly initialized job type and SubArea
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @post Appropriate semaphores are locked based on job type requirements
 *
 */
Std_ReturnType MemAcc_Sema4_RequestLockAdvancedMode(const MemAcc_JobRuntimeInfoType *JobInfo)
{
    MemAcc_FlashBlocksNumberType BlockNumber;
    Std_ReturnType RetVal;
    uint8 MemHwResource;

    /* Get the hardware resource for the job */
    MemHwResource = JobInfo->SubArea->MemHwResource;

    BlockNumber = MemAcc_CallMemHwSpecificServiceAddressToBlock(JobInfo);

    if(BlockNumber == MEMACC_INTENAL_FLASH_UTEST_BLOCK)
    {
        /*Utest sector is grouped with the sectors in block 0*/
        BlockNumber = MEMACC_INTENAL_FLASH_CODE_BLOCK_0;
    }
    switch (JobInfo->JobType)
    {
    case MEMACC_WRITE_JOB:
    case MEMACC_ERASE_JOB:
        /* Erase job pending - handle erase job locking */
        RetVal = MemAcc_Sema4_PerformLockAdvanced(MemHwResource, MEMACC_INTENAL_FLASH_LOCK_WRITE_ERASE, BlockNumber);
        break;

    case MEMACC_READ_JOB:
    case MEMACC_COMPARE_JOB:
    case MEMACC_BLANKCHECK_JOB:
        /* For Read, Compare and Blank Check jobs, just lock the block that are being accessed*/
        RetVal = MemAcc_Sema4_PerformLockAdvanced(MemHwResource, MEMACC_INTENAL_FLASH_NO_LOCK, BlockNumber);
        break;

    case MEMACC_MEMHWSPECIFIC_JOB:
    case MEMACC_REQUESTLOCK_JOB:
        /* Request lock job pending - handle request lock job locking */
        RetVal = MemAcc_Sema4_PerformLockAdvanced(MemHwResource, MEMACC_INTENAL_FLASH_LOCK_ALL, MEMACC_INTENAL_FLASH_NO_LOCK);
        break;
    default:
        /* Unknown job type*/
        RetVal = E_NOT_OK;
        break;
    }
    return RetVal;
}

/**
 * @brief Check if semaphores are locked in advanced mode based on job type
 * @details Advanced mode verification that checks if the appropriate semaphores
 *          are locked by the current module instance based on job type requirements.
 *          Different job types have different locking requirements to verify.
 *
 * @param[in] JobInfo - Pointer to job runtime information
 *
 * @return Std_ReturnType
 * @retval E_OK - Required semaphores are properly locked by this instance
 * @retval E_NOT_OK - Required semaphores are not locked or unknown job type
 *
 * @pre JobInfo must be valid with properly initialized job type and SubArea
 * @pre MemAcc_pSemaphoreConfigPtr must be properly initialized
 * @post No state change - read-only verification operation
 *
 */
Std_ReturnType MemAcc_Sema4_IsLockedAdvancedMode(const MemAcc_JobRuntimeInfoType *JobInfo)
{
    MemAcc_FlashBlocksNumberType BlockNumber;
    Std_ReturnType RetVal = (Std_ReturnType)E_OK;
    uint32 SwSema4LockValue;
    MemAcc_UintPtrType *SwSemaphore;
    uint8 MemHwResource;

    /* Get the hardware resource for the job */
    MemHwResource = JobInfo->SubArea->MemHwResource;

    BlockNumber = MemAcc_CallMemHwSpecificServiceAddressToBlock(JobInfo);

    SwSema4LockValue = MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphoreId;

    if(BlockNumber == MEMACC_INTENAL_FLASH_UTEST_BLOCK)
    {
        /*Utest sector is grouped with the sectors in block 0*/
        BlockNumber = MEMACC_INTENAL_FLASH_CODE_BLOCK_0;
    }
    switch (JobInfo->JobType)
    {
    case MEMACC_WRITE_JOB:
    case MEMACC_ERASE_JOB:
        /*For Erase and Write jobs, check "the block" and "write job" semaphore channels is locked by the current module instance*/
        SwSemaphore = &(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[BlockNumber]);
        if(SwSema4LockValue != (uint32)(*SwSemaphore))
        {
            RetVal = E_NOT_OK;
        }
        else
        {
            SwSemaphore = &(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[MEMACC_INTENAL_FLASH_LOCK_WRITE_ERASE]);
            if(SwSema4LockValue != (uint32)(*SwSemaphore))
            {
                RetVal = E_NOT_OK;
            }
        }
        break;

    case MEMACC_READ_JOB:
    case MEMACC_COMPARE_JOB:
    case MEMACC_BLANKCHECK_JOB:
        /* For Read, Compare and Blank Check jobs, just Check the block that are being accessed*/
        SwSemaphore = &(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[BlockNumber]);
        if(SwSema4LockValue != (uint32)(*SwSemaphore))
        {
            RetVal = E_NOT_OK;
        }
        break;

    case MEMACC_MEMHWSPECIFIC_JOB:
    case MEMACC_REQUESTLOCK_JOB:
        /* Request lock job and hw specific jobs, check if the lock all semaphore channel is locked */
        SwSemaphore = &(MemAcc_pSemaphoreConfigPtr[MemHwResource].SoftwareSemaphorePtr[MEMACC_INTENAL_FLASH_LOCK_ALL]);
        if(SwSema4LockValue != (uint32)(*SwSemaphore))
        {
            RetVal = E_NOT_OK;
        }
        break;
    default:
        /* Unknown job type*/
        RetVal = E_NOT_OK;
        break;
    }
    return RetVal;
}
#endif  /*MEMACC_MULTI_PARTITION_ADVANCE_ENABLED */

#define MEMACC_STOP_SEC_CODE
#include "MemAcc_MemMap.h"

#endif /* #if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)*/

#ifdef __cplusplus
}
#endif

/** @} */
