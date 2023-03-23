#include "main.h"

/**
 * more_numbers- prints 0-9
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(48 + (j / 10));
			}
			_putchar(48 + (j % 10));
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
