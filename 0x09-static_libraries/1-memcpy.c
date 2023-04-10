/**
 * _memcpy- copies a memory area
 *
 * @dest: where the memory is copied to
 * @src: memory to be copied
 * @n: size of memory to be copied
 *
 * Return: pointer to new location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
