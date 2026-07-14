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

#ifndef MEMACC_GENERAL_TYPES_H
#define MEMACC_GENERAL_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MemAcc_Types.h"
#include "MemAcc_MemApi.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEMACC_GENERALTYPES_VENDOR_ID                      43
#define MEMACC_GENERALTYPES_AR_RELEASE_MAJOR_VERSION       4
#define MEMACC_GENERALTYPES_AR_RELEASE_MINOR_VERSION       9
#define MEMACC_GENERALTYPES_AR_RELEASE_REVISION_VERSION    0
#define MEMACC_GENERALTYPES_SW_MAJOR_VERSION               7
#define MEMACC_GENERALTYPES_SW_MINOR_VERSION               0
#define MEMACC_GENERALTYPES_SW_PATCH_VERSION               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and MemAcc_MemApi.h file are of the same vendor */
#if (MEMACC_GENERALTYPES_VENDOR_ID != MEMACC_MEMAPI_VENDOR_ID)
    #error "MemAcc_GeneralTypes.h and MemAcc_MemApi.h have different vendor ids"
#endif
/* Check if current file and MemAcc_MemApi.h file are of the same Autosar version */
#if ((MEMACC_GENERALTYPES_AR_RELEASE_MAJOR_VERSION    != MEMACC_MEMAPI_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_GENERALTYPES_AR_RELEASE_MINOR_VERSION    != MEMACC_MEMAPI_AR_RELEASE_MINOR_VERSION) || \
     (MEMACC_GENERALTYPES_AR_RELEASE_REVISION_VERSION != MEMACC_MEMAPI_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_GeneralTypes.h and MemAcc_MemApi.h are different"
#endif
/* Check if current file and MemAcc_MemApi.h file are of the same software version */
#if ((MEMACC_GENERALTYPES_SW_MAJOR_VERSION != MEMACC_MEMAPI_SW_MAJOR_VERSION) || \
     (MEMACC_GENERALTYPES_SW_MINOR_VERSION != MEMACC_MEMAPI_SW_MINOR_VERSION) || \
     (MEMACC_GENERALTYPES_SW_PATCH_VERSION != MEMACC_MEMAPI_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of MemAcc_GeneralTypes.h and MemAcc_MemApi.h are different"
#endif

/* Check if current file and MemAcc_MemApi.h file are of the same vendor */
#if (MEMACC_GENERALTYPES_VENDOR_ID != MEMACC_TYPES_VENDOR_ID)
    #error "MemAcc_GeneralTypes.h and MemAcc_MemApi.h have different vendor ids"
#endif
/* Check if current file and MemAcc_Types.h file are of the same Autosar version */
#if ((MEMACC_GENERALTYPES_AR_RELEASE_MAJOR_VERSION    != MEMACC_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (MEMACC_GENERALTYPES_AR_RELEASE_MINOR_VERSION    != MEMACC_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (MEMACC_GENERALTYPES_AR_RELEASE_REVISION_VERSION != MEMACC_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of MemAcc_GeneralTypes.h and MemAcc_Types.h are different"
#endif
/* Check if current file and MemAcc_Types.h file are of the same software version */
#if ((MEMACC_GENERALTYPES_SW_MAJOR_VERSION != MEMACC_TYPES_SW_MAJOR_VERSION) || \
     (MEMACC_GENERALTYPES_SW_MINOR_VERSION != MEMACC_TYPES_SW_MINOR_VERSION) || \
     (MEMACC_GENERALTYPES_SW_PATCH_VERSION != MEMACC_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of MemAcc_GeneralTypes.h and MemAcc_Types.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
* @brief According to SWS_Mem_00070: In case a service is not relevant for a specific memory device technology,
*        the service shall always return E_MEM_SERVICE_NOT_AVAIL.
*        The return code is implementation-defined (see SWS_Std_00011 and SWS_Std_00005).
*/
#define E_MEM_SERVICE_NOT_AVAIL    0x02U

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief          Asynchronous job result type
* @implements     MemAcc_JobResultType_enum
*/
typedef enum
{
    MEMACC_OK               = 0x00,    /**< @brief The last MemAcc job was finished successfully                                                    */
    MEMACC_FAILED           = 0x01,    /**< @brief The last MemAcc job resulted in an unspecific failure and the job was not completed              */
    MEMACC_INCONSISTENT     = 0x02,    /**< @brief The last MemAcc job did not meet the expected result, e.g. a blank check operation                */
    MEMACC_CANCELED         = 0x03,    /**< @brief The last MemAcc job was canceled                                                                 */
    MEMACC_ECC_UNCORRECTED  = 0x04,    /**< @brief The last memory operation returned an uncorrectable ECC error                                    */
    MEMACC_ECC_CORRECTED    = 0x05     /**< @brief The last memory operation returned a correctable ECC error                                       */
} MemAcc_JobResultType;

/**
* @brief          Asynchronous job status type
* @implements     MemAcc_JobStatusType_enum
*/
typedef enum
{
    MEMACC_JOB_IDLE             = 0x00,    /**< @brief Job processing was completed or no job currently pending                                         */
    MEMACC_JOB_PENDING          = 0x01     /**< @brief A job is currently being processed                                                               */
} MemAcc_JobStatusType;

/**
* @brief          Type for asynchronous jobs
* @implements     MemAcc_JobType_enum
*/
typedef enum
{
    MEMACC_NO_JOB               = 0x00,    /**< @brief No job currently pending          */
    MEMACC_WRITE_JOB            = 0x01,    /**< @brief Write job pending                 */
    MEMACC_READ_JOB             = 0x02,    /**< @brief Read job pending                  */
    MEMACC_COMPARE_JOB          = 0x03,    /**< @brief Compare job pending               */
    MEMACC_ERASE_JOB            = 0x04,    /**< @brief Erase job pending                 */
    MEMACC_MEMHWSPECIFIC_JOB    = 0x05,    /**< @brief Hardware specific job pending     */
    MEMACC_BLANKCHECK_JOB       = 0x06,    /**< @brief Blank check job pending           */
    MEMACC_REQUESTLOCK_JOB      = 0x07     /**< @brief Request lock job pending          */
} MemAcc_JobType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief         MemAcc Address Type
* @details       Logical memory address type (depends on based on MemAcc64BitSupport configuration 32 or 64 bit)
* @implements    MemAcc_AddressType_typedef
*/
typedef MEMACC_ADDRESSTYPE MemAcc_AddressType;


/**
* @brief         MemAcc Length Type
* @details       Job length type (depends on based on MemAcc64BitSupport configuration 32 or 64 bit)
* @implements    MemAcc_LengthType_typedef
*/
typedef MEMACC_LENGTHTYPE MemAcc_LengthType;
/**
* @brief         MemAcc Address Area Id Type
* @details       Unique address area ID type
* @implements    MemAcc_AddressAreaIdType_typedef
*/
typedef uint16 MemAcc_AddressAreaIdType;

/**
* @brief          MemAcc Data Type
* @details        General data type
* @implements     MemAcc_DataType_typedef
*/
typedef uint8 MemAcc_DataType;

/**
* @brief         MemAcc Hardware Id Type
* @details       The name of each enum parameter is constructed from the Mem module name and the Mem instance name.
*                Type for the unique numeric identifiers of all Mem hardware instances used for hardware specific requests.
*
* @implements    MemAcc_HwIdType_typedef
*/
typedef uint32 MemAcc_HwIdType;

/*==================================================================================================
*                                           NOTIFICATION PROTOTYPE
==================================================================================================*/
/**
* @brief          MemAcc application job end notification callback.The function name is configurable
*
* @implements     MemAcc_AddressAreaJobEndNotification_functionPointer
*/
typedef void (*MemAcc_AddressAreaJobEndNotification)
(
    MemAcc_AddressAreaIdType    AddressAreaId,
    MemAcc_JobResultType        JobResult
);

/**
* @brief          Address area lock application callback. The function name is configurable.
*
* @implements     MemAcc_ApplicationLockNotification_functionPointer
*/
typedef void (*MemAcc_ApplicationLockNotification)(void);

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          MemAcc memory infomation type
* @details        This structure contains information of Mem device characteristics.
*                 It can be accessed via the MemAcc_GetMemoryInfo() service.
* @implements     MemAcc_MemoryInfoType_struct
*/
typedef struct
{
    MemAcc_AddressType    LogicalStartAddress;     /**< @brief Logical start address of sub address area                                          */
    MemAcc_AddressType    PhysicalStartAddress;    /**< @brief Physical start address of sub address area                                         */
    MemAcc_LengthType     MaxOffset;               /**< @brief Size of sub address area in bytes -1                                               */
    uint32                EraseSectorSize;         /**< @brief Size of a sector in bytes                                                          */
    uint32                EraseSectorBurstSize;    /**< @brief Size of a sector burst in bytes. Equals SectorSize in case burst is disabled       */
    uint32                ReadMinSize;             /**< @brief  Smallest readable unit in bytes                                                   */
    uint32                WritePageSize;           /**< @brief Write size of a page in bytes                                                      */
    uint32                ReadMaxSize;             /**< @brief Largest readable unit in bytes                                                     */
    uint32                WritePageBurstSize;      /**< @brief Size of a page burst in bytes. Equals WritePageSize in case burst is disabled      */
    MemAcc_HwIdType       HwId;                    /**< @brief Referenced memory driver hardware identifier                                       */
} MemAcc_MemoryInfoType;

/**
* @brief          MemAcc job infomation type
* @details        This structure contains information the current processing state of the MemAcc module.
* @implements     MemAcc_JobInfoType_struct
*/
typedef struct
{
    MemAcc_AddressType      LogicalAddress;    /**< @brief Address of currently active address area request             */
    MemAcc_LengthType       Length;            /**< @brief Length of the currently active address area request          */
    MemAcc_HwIdType         HwId;              /**< @brief Referenced memory driver hardware identifier                 */
    uint32                  MemInstanceId;     /**< @brief Instance ID of the current memory request                    */
    uint32                  MemAddress;        /**< @brief Physical address of the current memory driver request        */
    uint32                  MemLength;         /**< @brief Length of memory driver request                              */
    MemAcc_JobType          CurrentJob;        /**< @brief Currently active MemAcc job                                  */
    MemAcc_JobResultType    MemResult;         /**< @brief Current or last Mem driver result                            */
} MemAcc_JobInfoType;

/**
* @brief          MemAcc_SubAddressAreaType
* @details        Data structure for a sub address area
* @implements     MemAcc_SubAddressAreaType_struct
*/
typedef struct
{
    MemAcc_AddressType                  LogicalStartAddress;     /**< @brief Logical start address of sub address area                      */
    MemAcc_AddressType                  PhysicalStartAddress;    /**< @brief Physical start address of sub address area                     */
    MemAcc_LengthType                   Length;                  /**< @brief Size of sub address area in bytes                              */
    uint8                               NumOfEraseRetries;       /**< @brief The number of retries of a failed erase job                    */
    uint8                               NumOfWriteRetries;       /**< @brief The number of retries of a failed write job                    */
    uint8                               BurstSettings;           /**< @brief Burst settings of Erase/read/write operations                  */
    /* Mem related information */
    MemAcc_MemInvocationType            MemInvocation;           /**< @brief How the Mem driver is invocated                                */
    const MemAcc_MemBinaryHeaderType    *MemApi;                  /**< @brief Mem driver service functions and consistency information      */
    MemAcc_MemInstanceIdType            MemInstanceId;           /**< @brief Instance ID of the current memory request                      */
    const MemAcc_SectorBatchInfoType    MemSectorBatchInfo;      /**< @brief Sector batch information                                       */
    uint8                               MemHwResource;           /**< @brief The hardware resource identifier value                         */
    uint8                               Hw_Id;                   /**< @brief Referenced memory driver hardware identifier                   */
} MemAcc_SubAddressAreaType;


/**
* @brief          MemAcc_AddressAreaType
* @details        This structure contains configured information for each memory address areas.
* @implements     MemAcc_AddressAreaType_struct
*/
typedef struct
{
    MemAcc_AddressAreaIdType                AreaId;             /**< @brief Unique numeric identifier of address area                              */
    MemAcc_LengthType                       Length;             /**< @brief Size of the whole address area in bytes                                */
    uint16                                  Priority;           /**< @brief The priority of an AddressArea compared to other AddressAreas          */
    uint8                                   BufferAlignment;    /**< @brief Buffer alignment value                                                 */
    MemAcc_AddressAreaJobEndNotification    JobEndNotif;        /**< @brief The notification function which is called after MemAcc job completion  */
    uint16                                  SubAreaCount;       /**< @brief Number of sub address areas in this memory address area                */
    const MemAcc_SubAddressAreaType        *SubAreas;           /**< @brief Point to first element in array of sub address areas configurations    */
} MemAcc_AddressAreaType;


/**
* @brief          MemAcc job runtime information type
* @details        This structure contains runtime information the current processing job of each address area.
* @implements     MemAcc_JobRuntimeInfoType_struct
*/
typedef struct
{
    /* Input information */
    MemAcc_AddressAreaIdType            AreaId;              /**< @brief Requested address area id                                                    */
    MemAcc_JobType                      JobType;             /**< @brief Type of currently executed job (Erase, Write, or Read,...)                   */
    MemAcc_AddressType                  LogicAddress;        /**< @brief Last logical address to be processed                                         */
    MemAcc_AddressType                  PhysicAddress;       /**< @brief Last physical address to be processed                                        */
    MemAcc_LengthType                   LengthOrigin;        /**< @brief Requested bytes of data to be processed                                      */
    MemAcc_DataType                    *DataPtr;             /**< @brief Pointer to user data buffer (used in Read, Write, Compare)                   */
    MemAcc_LengthType                  *LengthPtr;           /**< @brief Size pointer of the data passed by dataPtr (used in HwSpecificService only)  */
    MemAcc_MemHwServiceIdType           MemHwServiceId;      /**< @brief Hardware specific service request identifier for dispatching the request     */
    /* Output result of the parameter checking stage */
    uint16                              AreaIndex;           /**< @brief The index of address area being processed                                    */
    const MemAcc_SubAddressAreaType    *SubArea;             /**< @brief The start sub address area of the requested job                              */
    /* Runtime information */
    MemAcc_LengthType                   LengthRemain;              /**< @brief Remaining bytes of data to be processed                                      */
    MemAcc_LengthType                   LengthChunk;               /**< @brief The amount of data in bytes to be processed each chunk                       */
    MemAcc_JobStateType                 JobState;                  /**< @brief The internal transition state                                                */
    MemAcc_JobResultType                CurrentConsolidatedResult; /**< @brief This value store consolidated Result of current job                          */
    MemAcc_JobResultType                JobResult;                 /**< @brief The result of the most recent job                                            */
    MemAcc_JobStatusType                JobStatus;                 /**< @brief The asynchronous job status                                                  */
    uint8                               JobRetries;                /**< @brief The number of retries of a failed erase or write job                         */
    MemAcc_ApplicationLockNotification  LockNotif;                 /**< @brief The callback function is called when the lock is complete                    */
} MemAcc_JobRuntimeInfoType;


/**
* @brief          MemAcc Configuration type
* @details        Postbuild configuration structure type
* @implements     MemAcc_ConfigType_struct
*/
typedef struct
{
    const uint32                    AddressAreaCount;    /**< @brief Number of address areas are configured in this configuration set   */
    const MemAcc_AddressAreaType   *AddressAreas;        /**< @brief Point to first element in array of address areas configurations    */
    MemAcc_JobRuntimeInfoType      *JobRuntimeInfo;      /**< @brief Point to first element in array of job runtime infomation          */
    const uint32                    MemApiCount;         /**< @brief Number of Mem drivers are used by MemAcc in this configuration set */
    MemAcc_MemBinaryHeaderType      *MemApis;            /**< @brief Mem driver service functions and consistency information           */
#if (MEMACC_MULTI_PARTITION_TYPE_3_ENABLED == STD_ON)
    const uint8                    *PartitionList;       /**< @brief Pointer to used partitions                                         */
    const uint32                   *PartitionMapping;    /**< @brief Pointer to AddressArea partition mapping                           */
#endif
#if (MEMACC_MULTI_PARTITION_TYPE_1_ENABLED == STD_ON)
    const MemAcc_SemaphoreConfigType *SemaphoreConfig;   /**< @brief Semaphore configuration for Multicore Type 1 support               */
#endif
    const MemAcc_MemInvocationType *MemApisInvocation;   /**< @brief How the Mem drivers is invocated                                   */
    MemAcc_HwResourcesStatus       *HwResourcesStatus;   /**< @brief Runtime status of the Mem hardware resources to indicate they are idle or busy */
    const uint8                    HwResourceCount;      /**< @brief Number of hardware resources which are provided by Mem drivers     */
} MemAcc_ConfigType;
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /*MEMACC_GENERAL_TYPES_H*/

/** @} */
