#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
char letter;
int count;
for (count = 0; count < 10; count++)
{
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
}
}
