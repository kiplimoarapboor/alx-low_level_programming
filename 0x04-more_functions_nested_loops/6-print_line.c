#include "main.h"

/**
 * print_line- prints a straight line of n length
 *
 * @n: length of line to be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
