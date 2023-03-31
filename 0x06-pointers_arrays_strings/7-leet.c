/**
 * leet- performs leet encoding on a,e o, t, l
 *
 * @s: string to be converted
 *
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i, j;
	char src[] = "AEOTL", dest[] = "43071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; src[j]; j++)
			if (s[i] == src[j] || s[i] == src[j] - 32)
				s[i] = dest[j];
	}

	return (s);
}
