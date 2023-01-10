#include <stdio.h>

/**
 * main - program to determine number of arguments
 * @argc: value parameter to store number of arguments
 * @argv: ref parameter to store a string of arguments
 * Return: does not return anything
 */

int main(int argc, char *argv[])
{
	int num, digitsWeight = 1;

	(void)argv;
	argc--;
	num = argc;

	while ((argc / 10) != 0)
	{
		digitsWeight *= 10;
		argc /= 10;
	}

	while (num > 10)
	{
		putchar((num / digitsWeight) + '0');
		num %= digitsWeight;
		digitsWeight /= 10;
	}
	putchar(num + '0');
	putchar('\n');
	return (0);
}
