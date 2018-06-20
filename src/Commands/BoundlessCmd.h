#ifndef BoundlessCmd_h
#define BoundlessCmd_h

#include "Cmd.h"

namespace simpleCLI {
    class BoundlessCmd : public Cmd {
        public:
            BoundlessCmd(const char* name, void(*runFnct)(Cmd*));
            BoundlessCmd(String name, void(*runFnct)(Cmd*));
            ~BoundlessCmd();

            String getName();
            void reset();
            bool parse(String arg, String value);
            int argNum();

            Arg* getArg(int i);
            Arg* getArg(const char* name);
            Arg* getArg(String name);

            bool isSet(int i);
            bool isSet(const char* name);
            bool isSet(String name);

            String getValue(int i);
            String getValue(const char* name);
            String getValue(String name);

            bool isSet();

            String toString();

        private:
            char* name    = NULL;
            int args      = 0;
            Arg* firstArg = NULL;
            Arg* lastArg  = NULL;
    };
}
#endif // ifndef BoundlessCmd_h