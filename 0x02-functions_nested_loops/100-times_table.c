#include "main.h"
/**
 * print_times_table- prints the times table
 * @n: the size of the times table
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar(48 + 0);
		for (j = 1; j <= n; j++)
		{
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + product);
			}
			else if (product > 9 && product <= 99)
			{
				_putchar(' ');
				_putchar(48 + product / 10);
				_putchar(48 + product % 10);
			}
			else
			{
				_putchar(48 + (product / 100));
				_putchar(48 + ((product / 10) % 10));
				_putchar(48 + (product % 10));
			}
		}
		_putchar('\n');
	}
}
