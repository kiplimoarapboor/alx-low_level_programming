#include "main.h"
#include <math.h>

/**
 * print_number- prints an integer
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(48 + n % 10);
}
