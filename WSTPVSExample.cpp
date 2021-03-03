#pragma hdrstop
#include "wstp.h"

int main()
{
    WSENV env;

    env = WSInitialize((WSEnvironmentParameter)0);
    if (env == nullptr)
        return -1;

    WSDeinitialize(env);

    return 0;
}