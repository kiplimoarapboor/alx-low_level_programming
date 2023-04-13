#include <stdlib.h>

/**
 * _calloc- allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr = malloc(nmemb * size);
	char *init;

	if (!(nmemb) || !(size) || ptr == NULL)
		return (NULL);

	init = ptr;

	for (i = 0; i < size * nmemb; i++)
		init[i] = 0;

	return (ptr);
}
