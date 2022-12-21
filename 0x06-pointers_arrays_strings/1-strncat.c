#include "main.h"
#include <string.h>
/**
*_strncat - concatenates two strings
*@dest: is the destin where the scr will concatenate
*@src: is the source
*@n: is the number of chars that will be took from the source
*Return: return the result of the concatanation
*/
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
