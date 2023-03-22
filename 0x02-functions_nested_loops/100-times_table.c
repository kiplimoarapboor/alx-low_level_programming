#include "main.h"

/**
 * print_times_table- prints the times table
 *
 * @n: the size of the times table
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (product >= 100)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(48 + (product /100));
				_putchar(48 + ((product / 10) % 10));
				_putchar(48 + (product % 10));
			}
			else if (product >= 10 && product < 100)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + (product / 10));
				_putchar(48 + (product % 10));
			}
			else if (product < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + product);
			}
		}
		_putchar('\n');
	}
}
