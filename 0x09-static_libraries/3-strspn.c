/**
 * _strspn- gets the number of bytes with substring in string
 *
 * @s: the source string
 * @accept: the substring
 *
 * Return: the number of bytes with substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		j = 0;

		while (s[i] != accept[j])
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++;
	}

	return (i);
}
