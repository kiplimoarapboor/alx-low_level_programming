#include "main.h"
/**
 * binary_to_uint- converts binary to unsigned int
 *
 * @b: binary string
 *
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0, len = strlen(b);

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		uint <<= 1;
		uint += b[i] - 48;
		i++;
	}

	if (i != len)
		return (0);

	return (uint);
}
