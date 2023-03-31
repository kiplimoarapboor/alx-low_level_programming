/**
 * cap_string- capitalizes words in string
 *
 * @s: the string
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char delimeter[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; delimeter[j]; j++)
			if (s[i] == delimeter[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
	}

	return (s);
}
