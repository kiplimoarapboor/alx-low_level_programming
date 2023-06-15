#include <stdlib.h>

/**
 * malloc_checked- allocates memory using malloc
 *
 * @b: size of memory to be allocates
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
