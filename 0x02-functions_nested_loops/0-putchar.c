#include "main.h"
/**
*main - prints a message from main .h
*
*Return: nothing 0
*/
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
