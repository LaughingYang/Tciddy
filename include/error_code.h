/**
 *
 */

#ifndef TCIDDY_INCLUDE_ERROR_CODE_H_
#define TCIDDY_INCLUDE_ERROR_CODE_H_

/** 
 * error codes are divided into two groups:
 * high layer error code: such as OK, operation error, network error
 * high layer error code is common error
 * low layer error code: such as indexOutOfRrange, null pointer
 * low layer error code is more details
 */
typedef enum error_code
{
    E_OK = 0,
    E_UNKNOWN,
    E_NETWORK,
    E_INVALID_OPERATION,
    // following is detail error
    E_INDEX_OUT_OF_RANGE = 100,
    E_NULL_POINTER
} ErrorCode;


#endif // #ifndefTCIDDY_INCLUDE_ERROR_CODE_H_
