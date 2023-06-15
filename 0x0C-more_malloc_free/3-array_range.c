#include <stdlib.h>

/**
 * array_range- creates array of integers
 *
 * @min: minimum element in array
 * @max: maximum element in array
 *
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size = sizeof(int) * (1 + (max - min));

	if (size < 1)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;

	return (array);
}
