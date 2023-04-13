#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes from second string to use
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;
	size_t len = len1 + len2;
	char *string = malloc(len + 1);

	if (string == NULL)
		return (NULL);

	if (len1 > 0)
		memcpy(string, s1, len1);
	if (len2 > 0 && n > 0)
		memcpy(string + len1, s2, n);

	string[len] = '\0';

	return (string);
}
