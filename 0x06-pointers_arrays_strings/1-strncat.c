/**
 * _strncat- conditionally concatenates two strings such that
 * only n bytes from one string is used
 *
 * @dest: pointer to destination address
 * @src: pointer to source string address
 * @n: number of bytes from source string to be added to destinations string
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j <= n - 1)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
