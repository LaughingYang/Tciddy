#ifndef _H_YDDICT_
#define _H_YDDICT_

#include <string>
#include <vector>

#include "explain.h"

class YdDict
{
public:
    std::vector<Explain> suggest(const std::string& keyword, Lang type);
    std::string simple(const std::string& keyword, Lang type);
    std::string detail(const std::string& keyword, Lang type);
};

#endif

