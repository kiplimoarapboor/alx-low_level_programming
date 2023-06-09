/**
 * _strpbrk- searches a string for any member of a set of bytes
 *
 * @s: the string
 * @accept: the set of bytes
 *
 * Return: pointer to first occurence of set member
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			return (&s[i]);
		}
	}

	return ('\0');
}
