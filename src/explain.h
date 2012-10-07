#ifndef _H_EXPLAIN_
#define _H_EXPLAIN_

#include <string>

typedef enum language_t
{
    CN,         // Chinese
    EN,         // English
    FR,         // Franch
    JP,         // Japanese
    KR,         // Korean
}Lang;

typedef struct explain_t
{
    std::string keyword;
    std::string language;
    std::string explain;
}Explain;

#endif
