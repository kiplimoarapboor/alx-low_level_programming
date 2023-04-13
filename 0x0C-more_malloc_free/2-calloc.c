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
	void *ptr;
	char *init;

	if (!(nmemb) || !(size))
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!(ptr))
		return (NULL);

	init = ptr;

	for (i = 0; i < (size * nmemb); i++)
		init[i] = '\0';

	return (ptr);
}
