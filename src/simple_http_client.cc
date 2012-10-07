/**
 *
 */
#include "simple_http_client.h"

#include "curl/curl.h"
#include "error_code.h"

using namespace std;

static size_t write_data(void* ptr, size_t size, size_t nmemb, void* stream)
{
    std::string* str = dynamic_cast<std::string*>((std::string *)stream);
    if(!str || !ptr) {
        return 0;
    }
    char* buf = (char*)ptr;
    str->append(buf, size * nmemb);
    return nmemb;
}

SimpleHttpClient::SimpleHttpClient():debug(false)
{

}

SimpleHttpClient::~SimpleHttpClient()
{

}

ErrorCode SimpleHttpClient::Get(const string& strUrl, string& strResponse)
{
    CURLcode res;
    CURL* curl = curl_easy_init();
    if(!curl) {
        //return CURLE_FAILED_INIT;
        return E_NETWORK;
    }
    if(debug) {
        
    }
    curl_easy_setopt(curl, CURLOPT_URL, strUrl.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&strResponse); 

    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl); 
    
    if(res == CURLE_OK) {
        return E_OK;
    }
    return E_UNKNOWN;
}

