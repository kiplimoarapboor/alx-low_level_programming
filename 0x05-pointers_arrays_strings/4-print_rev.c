#include "main.h"

/**
 * print_rev- prints string in reverse
 *
 * @s: string to be rversed
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
