#include "main.h"

/**
 * clear_bit- sets bit at a position to 0
 *
 * @n: pointer to number
 * @index: position for bit to be set
 *
 * Return: (1) is success, (-1) fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
