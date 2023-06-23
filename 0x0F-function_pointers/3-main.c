#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main- performs simple operations
 *
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: Always (0) Successful, exit with 98, 99, 100 Otherwise
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", operation(atoi(argv[1]), atoi(argv[3])));

	return (0);

}
