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
	int flag;
	unsigned int count = 0;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	while ((c = fgetc(fp)) != EOF && count < letters)
	{
		flag = write(1, &c, 1);
		if (flag == -1)
			return (0);
		count++;
	}

	fclose(fp);

	return (count);
}
