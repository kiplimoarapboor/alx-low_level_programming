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
	int o, r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);
	if (!filename)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || !(r == w))
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
