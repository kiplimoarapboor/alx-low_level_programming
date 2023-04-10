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

int main (int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num == 0 && strcmp(argv[i], "0") != 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += num;
		}

		printf("%i\n", sum);
	}

	return (0);
}
