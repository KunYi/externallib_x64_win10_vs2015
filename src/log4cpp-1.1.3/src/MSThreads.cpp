/*
 * Copyright 2002, Log4cpp Project. All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */
#if defined(_MSC_VER)
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#endif
#include <log4cpp/threading/Threading.hh>
#include <stdio.h>

#if defined(LOG4CPP_HAVE_THREADING) && defined(LOG4CPP_USE_MSTHREADS)

namespace log4cpp {
    namespace threading {

        std::string getThreadId() {
            char buffer[16];
            sprintf(buffer, "%lu", GetCurrentThreadId());
            return std::string(buffer);
        };
    }
}

#endif // LOG4CPP_HAVE_THREADING && LOG4CPP_USE_MSTHREADS
