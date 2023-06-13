#include <stdlib.h>
#include <string.h>

/**
 * str_concat- concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;
	size_t len = len1 + len2;
	char *array = malloc(len + 1);

	if (array == NULL)
		return (NULL);

	if (len1 > 0)
		memcpy(array, s1, len1);
	if (len2 > 0)
		memcpy(array + len1, s2, len2);

	array[len] = '\0';

	return (array);
}
