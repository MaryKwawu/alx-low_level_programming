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
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
