#include <stdio.h>

/**
 * main - program to determine number of arguments
 * @argc: value parameter to store number of arguments
 * @argv: ref parameter to store a string of arguments
 * Return: does not return anything
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
