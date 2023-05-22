#include "main.h"

/**
 * get_bit- gets value of bit at an index
 *
 * @n: the number
 * @index: the index
 *
 * Return: the bit, (-1) otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
