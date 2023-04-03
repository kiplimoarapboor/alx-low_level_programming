/**
 * _strchr- locates character in string
 *
 * @s: the string
 * @c: the character
 *
 * Return: pointer to first occurence, NULL if no occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return ('\0');
}
