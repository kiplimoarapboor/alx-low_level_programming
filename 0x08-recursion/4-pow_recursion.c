/**
 * _pow_recursion- finds powers of numbers
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: the power, -1 if exponent is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
