#include <stdio.h>

/**
 * print_to_98- prints natural numbers from any value to 98
 *
 * @n: the natural number that acts as origin
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	printf("98\n");
}
