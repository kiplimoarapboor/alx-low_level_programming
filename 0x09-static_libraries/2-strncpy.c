/**
 * _strncpy- copies a string
 *
 * @dest: the destination pointer for the strin
 * @src: the source of the string
 * @n: number of bytes to be copied from src
 *
 * Return: the destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
