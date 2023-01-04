#include "main.h"
/**
* _memset - fill memomry buffer with constants bytes
*
*@s: ref parameter to store the address
*@b: value parameter, number of bytes
*@n: value parameter, size of buffer
*Return: the address of the buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
