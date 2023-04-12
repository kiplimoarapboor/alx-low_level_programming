#include <stdlib.h>

/**
 * alloc_grid- creates pointer to 2-d int array
 *
 * @width: array width
 * @height: array height
 *
 * Return: pointer to 2-d array;
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
