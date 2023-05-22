#include "main.h"

/**
 * set_bit- sets value of bit at index to 1
 *
 * @n: pointer to the integer
 * @index: the index
 *
 * Return: (1) is success, (-1) fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= 1 << index;
	return (1);
}
