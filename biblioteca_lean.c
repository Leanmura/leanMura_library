#include "biblioteca_lean.h"

int formatSustP(char sustP[])
{
    int todoOk = 0;
    if (sustP != NULL)
    {
        strlwr(sustP);
        sustP[0] = toupper(sustP[0]);
        todoOk = 1;
    }
    return todoOk;
}

int formatSustC(char sustC[])
{
    int todoOk = 0;
    if (sustC != NULL)
    {
        strlwr(sustC);
        todoOk = 1;
    }
    return todoOk;
}


