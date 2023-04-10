/**
 * _strstr- locates a substring in string
 *
 * @haystack: the string
 * @needle: the substring
 *
 * Return: if substring found, the address, NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	char *temp_hay = haystack;
	char *temp_needle = needle;

	while (*haystack)
	{
		while (*needle && *haystack && *needle == *haystack)
		{
			needle++;
			haystack++;
		}

		if (*needle == '\0')
			return (temp_hay);

		temp_hay++;
		haystack = temp_hay;
		needle = temp_needle;
	}

	return ('\0');
}
