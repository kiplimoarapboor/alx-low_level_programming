/**
 * _sqrt- finds the natural sqrt of a number
 *
 * @i: the guess sqrt
 * @n: the number
 *
 * Return: natural sqrt of i, -1 if sqrt doesn't exist
 */

int _sqrt(int n, int i)
{
	if (i * i > n || n < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * divisor - checks if number is divisible by any from 2
 *
 * @n: the number
 * @i: the divisor
 *
 * Return: 1 if not divisible, 0 otherwise
 */

int divisor(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i > _sqrt(n, 1))
		return (1);

	if (n % i == 0)
		return (0);

	return (divisor(n, i + 1));
}

/**
 * is_prime_number- checks if number is prime
 *
 * @n: the number
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (divisor(n, 2));
}
