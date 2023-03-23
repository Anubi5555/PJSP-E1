#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

#define MAX_STRING 101

int manin () 
{
    char str1 [MAX_STRING], str2 [MAX_STRING];

    scanf ("%s", str1);
    __fpurge (stdin);

    fgets (str2, MAX_STRING, stdin);
}