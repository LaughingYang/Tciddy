/**
 *
 */

#ifndef TCIDDY_INCLUDE_SIMPLE_HTTP_CLIENT_H_
#define TCIDDY_INCLUDE_SIMPLE_HTTP_CLIENT_H_

#include <string>
#include "error_code.h"

class SimpleHttpClient {
public:
    SimpleHttpClient(void);
    ~SimpleHttpClient(void);

public:
    ErrorCode Get(const std::string& strUrl, std::string& strResponse);

public:
    void debug_on(void){debug = true;}
    void debug_off(void){debug = false;}
private:
    bool debug;
};

#endif // #ifndefTCIDDY_INCLUDE_SIMPLE_HTTP_CLIENT_H_
