#include <stdio.h>
/**
*main - prints the alphabet
*
*Return: return status code
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
