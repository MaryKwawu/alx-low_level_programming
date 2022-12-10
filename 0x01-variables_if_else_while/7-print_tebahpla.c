#include <stdio.h>
/**
*main -write the alphabet reversed
*Return: return status code
*/
int main(void)
{
char letter = 'z';
for (; letter >= 'a';  letter--)
{
putchar(letter);
};
putchar('\n');
return (0);
}
