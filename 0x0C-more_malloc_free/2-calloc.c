#include <stdlib.h>

/**
 * calloc: allocates memory for an array, using malloc
 *
 * @nmeb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr = malloc(nmemb * size);

	if (ptr == NULL || !(nmemb) || !(size))
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = 0;

	return (ptr);
}
