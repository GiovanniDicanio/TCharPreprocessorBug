// Utils.cpp

#include <Windows.h>
#include "Utils.h"

namespace Utils
{

std::string GetTempPath()
{
    // ... Actual implementation will call the ::GetTempPathW() Win32 API,
    // and convert the returned UTF-16 string to UTF-8.

    return "C:\\Temp";
}

}

