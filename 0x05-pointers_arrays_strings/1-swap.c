/**
 * swap_int - swaps two integers
 *
 * @a: the pointer to the int
 * @b: the pointer to the second int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
