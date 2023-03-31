#include <stdio.h>

/**
 * print_buffer- prints a buffer
 *
 * @b: pointer to the buffer
 * @size: the size of the buffer to be printed
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i <= size; i += 10)
	{
		printf("%08x:", i);

		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");
		}

		printf(" ");

		for (k = i; k < i + 10; k++)
		{
			if (k >= size)
				break;
			if (b[k] < 32 || b[k] > 126)
				b[k] = '.';
			putchar(b[k]);
		}

		printf("\n");
	}
}
