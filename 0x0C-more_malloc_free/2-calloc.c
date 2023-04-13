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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	init = ptr;

	for (i = 0; i < (size * nmemb); i++)
		init[index] = 48;

	return (mem);
}
