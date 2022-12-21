#include "main.h"
#include <stdio.h>
/**
*_strcat - Function used for the concatenation of two strings
*@dest: destination of string
*@src: source of string
*Return: pointer to the destination string
*/
char *strcat(char *dest, const char *src)
{
int dlen = 0, i;
while (dest[dlen])
{
dlen++;
}
for (i = 0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}

