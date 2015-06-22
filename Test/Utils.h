// Utils.h

#pragma once

#include <string>


//
// Prevent the TCHAR preprocessor-based substitution to kick in
//
// *** TODO: Uncomment the following lines to make the solution build. ***
//#ifdef GetTempPath
//#undef GetTempPath
//#endif


namespace Utils
{
    std::string GetTempPath();

    // ... Other utility functions
}

