/**
 * _memset- fills memory with constant byte
 *
 * @s: memory area to be filled
 * @b: the byte to be filled
 * @n: the number of memory
 *
 * Return: the pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
