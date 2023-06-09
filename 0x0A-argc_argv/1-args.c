#include <stdio.h>

/**
 * main- prints number of arguments passed
 *
 * @argc: number of arguments
 * @argv: argument position
 *
 * Return: Always (0)
 */


int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
