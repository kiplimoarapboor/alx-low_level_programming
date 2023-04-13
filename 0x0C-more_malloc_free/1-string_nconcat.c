#include <stdlib.h>

/**
 * string_nconcat- concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes from second string to use
 *
 * Return: pointer to new string
 */
size_t len(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = len(s1);
	size_t len2 = len(s2);
	size_t len = len1 + len2;
	char *string = malloc(len + 1);

	if (string == NULL)
		return (NULL);

	if (len1 > 0)
		_memcpy(string, s1, len1);
	if (len2 > 0 && n > 0)
		_memcpy(string + len1, s2, n);

	string[len] = '\0';

	return (string);
}

size_t len(char *str)
{
	size_t i = 0;
	while (str[i])
	{
		i++;
	}

	return (i);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
