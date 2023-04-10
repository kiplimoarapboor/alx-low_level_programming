/**
 * _strcat- concatenates two strings
 *
 * @dest: the destination address
 * @src: the source address
 *
 * Return: returns a concatenation of two strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
