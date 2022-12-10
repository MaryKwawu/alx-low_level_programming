#include <stdio.h>
/**
*main - return single integer from 0-10
*
*Return: Always 0 (Sucess)
*
*/

int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
