#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
