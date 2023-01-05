#include "main.h"
/**
*_puts_recursion - a function that prints a string,
*followed by a new line
*
*@s: - string
*returns: nothing since the function is void
*This means that we have to print inside the function
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar (*s);
_puts_recursion(s + 1);
}
else
_putchar ('\n');
}
