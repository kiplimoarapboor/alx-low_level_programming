/**
 * string_toupper- converts string to uppercase
 *
 * @c: string to be converted
 *
 * Return: the converted string
 */

char *string_toupper(char *c)
{
	int i = 0, len, diff;

	while (c[i])
		i++;

	len = i;

	for (i = 0; i < len; i++)
	{
		if (c[i] >= 65 && c[i] <= 90)
		{
			diff = c[i] - 65;
			c[i] = diff + 97;
		}
		if (c[i] >= 97 && c[i] <= 122)
		{
			diff = c[i] - 97;
			c[i] = diff + 65;
		}
	}
	return (c);
}
