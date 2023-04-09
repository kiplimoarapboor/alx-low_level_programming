/**
 * helper- finds the natural sqrt of a number
 *
 * @i: the guess sqrt
 * @n: the number
 *
 * Return: natural sqrt of i, -1 if sqrt doesn't exist
 */

int helper(int n, int i)
{
	if (i * i > n || n < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (helper(n, i + 1));
}

/**
 * _sqrt_recursion- finds square root of a number
 *
 * @n: the number
 *
 * Return: square root, -1 if no natural root
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
