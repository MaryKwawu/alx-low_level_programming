#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: Always 0 if successful else 1
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
