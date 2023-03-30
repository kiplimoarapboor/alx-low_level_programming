/**
 * _strncat- conditionally concatenates two strings such that only n bytes from one string is used
 *
 * @dest: pointer to destination address
 * @src: pointer to source string address
 * @n: number of bytes from source string to be added to destinations string
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
