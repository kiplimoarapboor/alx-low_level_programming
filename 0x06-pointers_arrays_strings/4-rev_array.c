/**
 * reverse_array- reverses an array
 *
 * @a: pointer to array address
 * @n: array length
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
