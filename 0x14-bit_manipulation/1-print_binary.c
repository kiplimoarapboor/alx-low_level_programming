#include <stdio.h>
#include "main.h"

/**
 * print_binary- prints binary representation of a number
 *
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	putchar('0' + (n % 2));
}
