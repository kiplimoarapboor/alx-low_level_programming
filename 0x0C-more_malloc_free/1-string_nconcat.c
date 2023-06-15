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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, i;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;

	len += n;

	string = malloc(len + 1);

	if (string == NULL)
		return (NULL);

	for (len = 0; s1[len]; len++)
		string[len] = s1[len];

	for (i = 0; s2[i] && i < n; i++)
		string[i + len] = s2[i];

	string[len + i] = '\0';

	return (string);
}
