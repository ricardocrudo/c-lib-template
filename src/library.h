#ifndef LIBRARY_H
#define LIBRARY_H

#ifdef __cplusplus
extern "C"
{
#endif

/*
****************************************************************************************************
*       INCLUDE FILES
****************************************************************************************************
*/


/*
****************************************************************************************************
*       MACROS
****************************************************************************************************
*/

#define LIBRARY_VERSION     "0.0.0"


/*
****************************************************************************************************
*       CONFIGURATION
****************************************************************************************************
*/


/*
****************************************************************************************************
*       DATA TYPES
****************************************************************************************************
*/


/*
****************************************************************************************************
*       FUNCTION PROTOTYPES
****************************************************************************************************
*/


/*
****************************************************************************************************
*       CONFIGURATION ERRORS
****************************************************************************************************
*/

// include external configuration file in case it exists
#if __has_include("library_config.h")
#include "library_config.h"
#endif

// add configuration errors checking here

#ifdef __cplusplus
}
#endif

// LIBRARY_H
#endif
