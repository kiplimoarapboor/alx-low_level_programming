#include "main.h"

/**
 * print_numbers- prints 0-9
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
