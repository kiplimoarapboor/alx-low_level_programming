/**
 * _strchr- locates character in string
 *
 * @s: the string
 * @c: the character
 *
 * Return: pointer to first occurence, or NULL if no occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
