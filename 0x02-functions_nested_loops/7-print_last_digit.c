#include "main.h"

/**
 * print_last_digit- returns last digit of an integer
 *
 * @a: the integer to be worked on
 *
 * Return: int that is the last character
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	a = a % 10;
	_putchar('0' + a);
	return (a);
}
