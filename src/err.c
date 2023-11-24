#include "err.h"
#include <stdlib.h>
#include <stdio.h>

void err(int eno, char *s1, char *s2)
{
    printf(s1, s2);
    exit(eno);
}

void warn(char *s1, char *s2)
{
    printf(s1, s2);
}
