#include <stdlib.h>
#include <string.h>

/**
 * _strdup-  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string
 *
 * Return: pointer to created memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *array;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	array = malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}

	array[len] = '\0';

	return (array);

}
