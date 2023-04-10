#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument position
 *
 * Return: (0) is Success, 1 is Error
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%i\n", x * y);

	return (0);
}
