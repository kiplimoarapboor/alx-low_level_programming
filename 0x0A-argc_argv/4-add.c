#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- adds positive numbers
 *
 * @argc: argument count
 * @argv: argument position
 *
 * Return: Always (0), 1 is Error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
