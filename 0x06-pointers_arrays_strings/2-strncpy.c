#include "main.h"
#include <string.h>
/**
*_strncpy - copy a number of char from one string to another
*@dest: is the destine of the copy
*@src: source of the copied chars
*@n: number of chars that will be coied
*Return: return the string
*/
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
