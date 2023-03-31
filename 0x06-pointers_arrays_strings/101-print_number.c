#include "main.h"
#include <math.h>

/**
 * print_number- prints an integer
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar(48 + num % 10);
}
