#include "main.h"

/**
 * read_textfile- reads a text file and prints it
 *
 * @filename: filename
 * @letters: number of characters to print
 *
 * Return: number of letters in file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	unsigned int count = 0;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	while ((c = fgetc(fp)) != EOF && count < letters)
	{
		write(1, &c, 1);
		count++;
	}

	fclose(fp);

	return (count);
}
