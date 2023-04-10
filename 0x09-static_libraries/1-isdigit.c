/**
 * _isdigit- checks if character is uppercase
 *
 * @c: the character to  be checked
 *
 * Return: 1 is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
