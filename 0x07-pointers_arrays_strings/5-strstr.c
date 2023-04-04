#include <string.h>

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
	int i = 0, j = 0;

	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}

	return ('\0');
}
