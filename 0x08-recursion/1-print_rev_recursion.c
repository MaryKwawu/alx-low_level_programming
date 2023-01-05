#include "main.h"
/**
*_print_rev_recursion- prints a string backward
*
*@s: the string
*
*return: nothing
*
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
