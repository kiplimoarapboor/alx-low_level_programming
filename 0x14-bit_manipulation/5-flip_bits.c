#include "main.h"

/**
 * flip_bits- finds number of bits to flip to equate numbers
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	int i, size = sizeof(unsigned long int) * 8;

	for (i = 0; i < size; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
