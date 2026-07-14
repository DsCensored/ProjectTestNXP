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

#ifndef MEMACC_MEMAPI_H
#define MEMACC_MEMAPI_H

/**
*   @file MemAcc.h
*
*   @addtogroup MEMACC
*   @implements MemAcc.h_Artifact
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
#define MEMACC_MEMAPI_VENDOR_ID                      43
#define MEMACC_MEMAPI_AR_RELEASE_MAJOR_VERSION       4
#define MEMACC_MEMAPI_AR_RELEASE_MINOR_VERSION       9
#define MEMACC_MEMAPI_AR_RELEASE_REVISION_VERSION    0
#define MEMACC_MEMAPI_SW_MAJOR_VERSION               7
#define MEMACC_MEMAPI_SW_MINOR_VERSION               0
#define MEMACC_MEMAPI_SW_PATCH_VERSION               1


/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Std_Types.h file are of the same version */
    #if ((MEMACC_TYPES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (MEMACC_TYPES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)\
        )
        #error "AutoSar Version Numbers of MemAcc_MemApi.h and Std_Types.h are different"
    #endif
#endif

/* Check if current file and MemAcc_CfgDefines.h file are of the same vendor */
#if (MEMACC_MEMAPI_VENDOR_ID != MEMACC_VENDOR_ID_CFG_DEFINES)
    #error "MemAcc_MemApi.h and MemAcc_CfgDefines.h have different vendor ids"
#endif
/* Check if current file and MemAcc_CfgDefines.h file are of the same Autosar version */
#if ((MEMACC_MEMAPI_AR_RELEASE_MAJOR_VERSION    != MEMACC_AR_RELEASE_MAJOR_VERSION_CFG_DEFINES) || \
     (MEMACC_MEMAPI_AR_RELEASE_MINOR_VERSION    != MEMACC_AR_RELEASE_MINOR_VERSION_CFG_DEFINES) || \
     (MEMACC_MEMAPI_AR_RELEASE_REVISION_VERSION != MEMACC_AR_RELEASE_REVISION_VERSION_CFG_DEFINES) \
    )
    #error "AutoSar Version Numbers of MemAcc_MemApi.h and MemAcc_CfgDefines.h are different"
#endif
/* Check if current file and MemAcc_CfgDefines.h file are of the same software version */
#if ((MEMACC_MEMAPI_SW_MAJOR_VERSION != MEMACC_SW_MAJOR_VERSION_CFG_DEFINES) || \
     (MEMACC_MEMAPI_SW_MINOR_VERSION != MEMACC_SW_MINOR_VERSION_CFG_DEFINES) || \
     (MEMACC_MEMAPI_SW_PATCH_VERSION != MEMACC_SW_PATCH_VERSION_CFG_DEFINES) \
    )
    #error "Software Version Numbers of MemAcc_MemApi.h and MemAcc_CfgDefines.h are different"
#endif

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
/**
* @brief          MemAcc mem job result type
* @implements     MemAcc_MemJobResultType_enum
*/
typedef enum
{
    MEM_JOB_OK                 = 0x00,    /**< @brief The last job has been finished successfully                                    */
    MEM_JOB_PENDING            = 0x01,    /**< @brief A job is currently being processed                                             */
    MEM_JOB_FAILED             = 0x02,    /**< @brief Job failed for some unspecific reason                                          */
    MEM_INCONSISTENT           = 0x03,    /**< @brief The checked page is not blank                                                  */
    MEM_ECC_UNCORRECTED        = 0x04,    /**< @brief Uncorrectable ECC errors occurred during memory access                         */
    MEM_ECC_CORRECTED          = 0x05     /**< @brief Correctable ECC errors occurred during memory access                           */
} MemAcc_MemJobResultType;
/*==================================================================================================
*                                             MEM RELATED TYPES
==================================================================================================*/

/**
* @brief         Memory driver configuration structure type
* @details       Memory driver configuration structure type
* @implements    MemAcc_MemConfigType_typedef
*/
typedef void MemAcc_MemConfigType;


/**
* @brief         MemAcc Mem Data Type
* @details       General data type
* @implements    MemAcc_MemDataType_typedef
*/
typedef uint8 MemAcc_MemDataType;


/**
* @brief         Memory driver instance ID type
* @details       Memory driver instance ID type
* @implements    MemAcc_MemInstanceIdType_typedef
*/
typedef uint32 MemAcc_MemInstanceIdType;


/**
* @brief         Physical memory device length type
* @details       Physical memory device length type
* @implements    MemAcc_MemLengthType_typedef
*/
typedef MEMACC_ADDRESSTYPE MemAcc_MemLengthType;


/**
* @brief         Physical memory device address type
* @details       Derived from MemAcc_AddressType
* @implements    MemAcc_MemAddressType_typedef
*/
typedef MEMACC_LENGTHTYPE MemAcc_MemAddressType;


/**
* @brief         Index type for Mem driver hardware specific service table
* @details       Index type for Mem driver hardware specific service table
* @implements    MemAcc_MemHwServiceIdType_typedef
*/
typedef uint32 MemAcc_MemHwServiceIdType;

/**
* @brief         MemAcc_MemInvocationType
* @details       Defines how the Mem driver services are accessed and how the Mem driver is scheduled and activated/initialized.
*
*/
typedef enum
{
    /**
    * Mem driver is linked with application.
    * Mem service functions are directly called by MemAcc.
    * Mem_Init is called by EcuM and Mem_MainFunction is triggered by SchM.
    */
    MEMACC_DIRECT_STATIC    = 0x00,

    /**
    * Mem driver is linked as a separate binary and is dynamically activated.
    * MemAcc will use Mem driver header table to invoke Mem service functions.
    * Call of Mem_Init and Mem_MainFunction is handled by MemAcc.
    */
    MEMACC_INDIRECT_DYNAMIC = 0x01,

    /**
    * Mem driver is linked with application.
    * MemAcc will use Mem driver header table to invoke Mem service functions.
    * Call of Mem_Init and Mem_MainFunction is handled by MemAcc.
    */
    MEMACC_INDIRECT_STATIC  = 0x02
} MemAcc_MemInvocationType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                       FUNCTION POINTER PROTOTYPES
==================================================================================================*/
/**
 * @brief    Function pointer for the Mem_Init service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemInitFuncType_functionPointer
*/
typedef void (*MemAcc_MemInitFuncType)
(
    MemAcc_MemConfigType    *ConfigPtr
);


/**
 * @brief    Function pointer for the Mem_DeInit service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemDeInitFuncType_functionPointer
*/
typedef void (*MemAcc_MemDeInitFuncType)(void);


/**
 * @brief    Function pointer for the Mem_JobResultType service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemGetJobResultFuncType_functionPointer
*/
typedef MemAcc_MemJobResultType (*MemAcc_MemGetJobResultFuncType)
(
    MemAcc_MemInstanceIdType    InstanceId
);


/**
 * @brief    Function pointer for the Mem_Suspend service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemSuspendFuncType_functionPointer
*/
typedef void (*MemAcc_MemSuspendFuncType)(
    MemAcc_MemInstanceIdType    InstanceId
);


/**
 * @brief    Function pointer for the Mem_Resume service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemResumeFuncType_functionPointer
*/
typedef void (*MemAcc_MemResumeFuncType)
(
    MemAcc_MemInstanceIdType    InstanceId
);


/**
 * @brief    Function pointer for the Mem_PropagateError service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemPropagateErrorFuncType_functionPointer
*/
typedef void (*MemAcc_MemPropagateErrorFuncType)
(
    MemAcc_MemInstanceIdType    InstanceId
);


/**
 * @brief    Function pointer for the Mem_Read service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemReadFuncType_functionPointer
*/
typedef Std_ReturnType (*MemAcc_MemReadFuncType)
(
    MemAcc_MemInstanceIdType    InstanceId,
    MemAcc_MemAddressType       SourceAddress,
    MemAcc_MemDataType         *DestinationDataPtr,
    MemAcc_MemLengthType        Length
);


/**
 * @brief    Function pointer for the Mem_Write service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemWriteFuncType_functionPointer
*/
typedef Std_ReturnType (*MemAcc_MemWriteFuncType)
(
    MemAcc_MemInstanceIdType     InstanceId,
    MemAcc_MemAddressType        TargetAddress,
    const  MemAcc_MemDataType   *SourceDataPtr,
    MemAcc_MemLengthType         Length
);


/**
 * @brief    Function pointer for the Mem_Erase service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemEraseFuncType_functionPointer
*/
typedef Std_ReturnType (*MemAcc_MemEraseFuncType)
(
    MemAcc_MemInstanceIdType     InstanceId,
    MemAcc_MemAddressType        TargetAddress,
    MemAcc_MemLengthType         Length
);


/**
 * @brief    Function pointer for the Mem_BlankCheck service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemBlankCheckFuncType_functionPointer
*/
typedef Std_ReturnType (*MemAcc_MemBlankCheckFuncType)
(
    MemAcc_MemInstanceIdType     InstanceId,
    MemAcc_MemAddressType        TargetAddress,
    MemAcc_MemLengthType         Length
);


/**
 * @brief    Function pointer for the Mem_HwSpecificService service for the invocation of the Mem driver API via function pointer interface.
 * @implements     MemAcc_MemHwSpecificServiceFuncType_functionPointer
*/
typedef Std_ReturnType (*MemAcc_MemHwSpecificServiceFuncType)
(
    MemAcc_MemInstanceIdType     InstanceId,
    MemAcc_MemHwServiceIdType    HwServiceId,
    MemAcc_MemDataType          *DataPtr,
    MemAcc_MemLengthType        *LengthPtr
);


/**
 * @brief    Function pointer for the Mem_MainFunction service for the invocation of the Mem driver API via function pointer interface.
*/
typedef void (*MemAcc_MemMainFuncType)(void);


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          MemAcc Mem Driver UniqueID Type
* @details        Mem Driver binary UniqueID structure type
*/
typedef struct
{
    uint16 ABIVersion;
    uint16 VendorID;
    uint32 DriverID;
} MemAcc_MemDriverUniqueIDType;

/**
* @brief          MemAcc Mem Driver Flags Type
* @details        Mem Driver binary Flags structure type
*/
typedef struct
{
    uint32 RelocatableBinary;
    uint32 VendorSpecific;
} MemAcc_MemDriverFlagsType;

/**
* @brief          MemAcc Mem Driver Header Type
* @details        Mem Driver binary Header structure type
*/
typedef struct
{
    MemAcc_MemDriverUniqueIDType      UniqueID;
    MemAcc_MemDriverFlagsType         Flags;
    MemAcc_MemAddressType             HeaderAddress;
    MemAcc_MemAddressType             DelimiterAddress;
} MemAcc_MemDriverHeaderType;

/**
* @brief          MemAcc_MemBinaryHeaderType
* @details        This structure contains elements for accessing the Mem driver service functions and consistency information.
* @implements     MemAcc_MemBinaryHeaderType_struct
*/
typedef struct
{
    uint64                                 UniqueId;                 /**< @brief Unique ID                                     */
    uint64                                 Flags;                    /**< @brief Header flags                                  */
    MemAcc_MemAddressType                  Header;                   /**< @brief Address of Mem driver header structure        */
    MemAcc_MemAddressType                  Delimiter;                /**< @brief Address of Mem driver delimiter field         */
    MemAcc_MemInitFuncType                 InitFunc;                 /**< @brief Mem_Init function pointer                     */
    MemAcc_MemDeInitFuncType               DeInitFunc;               /**< @brief Mem_Init function pointer                     */
    MemAcc_MemMainFuncType                 MainFunc;                 /**< @brief Mem_Main function pointer                     */
    MemAcc_MemGetJobResultFuncType         GetJobResultFunc;         /**< @brief Mem_GetJobResult function pointer             */
    MemAcc_MemReadFuncType                 ReadFunc;                 /**< @brief Mem_Read function pointer                     */
    MemAcc_MemWriteFuncType                WriteFunc;                /**< @brief Mem_Write function pointer                    */
    MemAcc_MemEraseFuncType                EraseFunc;                /**< @brief Mem_Erase function pointer                    */
    MemAcc_MemBlankCheckFuncType           BlankCheckFunc;           /**< @brief Mem_BlankCheck function pointer               */
    MemAcc_MemPropagateErrorFuncType       PropagateErrorFunc;       /**< @brief Mem_PropagateError function pointer           */
    MemAcc_MemSuspendFuncType              SuspendFunc;              /**< @brief Mem_Suspend function pointer                  */
    MemAcc_MemResumeFuncType               ResumeFunc;               /**< @brief Mem_Resume function pointer                   */
    MemAcc_MemHwSpecificServiceFuncType    HwSpecificServiceFunc;    /**< @brief Hardware specific service function pointer    */
} MemAcc_MemBinaryHeaderType;
#ifdef __cplusplus
}
#endif

/** @} */

#endif /* MEMACC_MEMAPI_H */
