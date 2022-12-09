#include <stdio.h>

/**
*main - return single integer from 0-10
*
*Return: Always 0 (Sucess)
*/
int main(void)
{
int num = 0;

for (int i = 0; num <= 10; i++)
{
printf("%d", num);
num++;
}
putchar("\n");
return (0);
}
