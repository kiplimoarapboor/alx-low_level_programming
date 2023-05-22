#include <stdio.h>
#include "main.h"

/**
 * print_binary- prints binary representation of a number
 *
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int i = 0, limit = 0;
	unsigned long int val;

	for (i = 63; i > -1; i--)
	{
		val = n >> i;

		if (val & 1)
		{
			_putchar('1');
			limit++;
		}
		else if (limit)
			_putchar('0');
	}
	if (!limit)
		_putchar('0');
}
