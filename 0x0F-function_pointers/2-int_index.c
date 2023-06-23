/**
 * int_index- searches for an integer in array
 *
 * @array: the array
 * @size: array size
 * @cmp: pointer to comparison function
 *
 * Return: index to first successful match, 0 if no
 * -1 if size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
