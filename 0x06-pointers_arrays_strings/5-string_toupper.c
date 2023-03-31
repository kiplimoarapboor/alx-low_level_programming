/**
 * string_toupper- converts string to uppercase
 *
 * @c: string to be converted
 *
 * Return: the converted string
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		i++;
	}
	return (c);
}
