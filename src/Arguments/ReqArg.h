#ifndef ReqArg_h
#define ReqArg_h

#include "Arg.h"

namespace simpleCLI {
    class ReqArg : public Arg {
        public:
            ReqArg(const char* name);
            ReqArg(String name);
            ~ReqArg();

            bool equals(const char* name);
            bool equals(String name);
            void setValue(String value);
            void reset();

            String getName();
            String getValue();
            bool isRequired();
            String toString();

        private:
            char* name  = NULL;
            char* value = NULL;
    };
}

#endif // ifndef ReqArg_h