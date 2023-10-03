#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- Read file to STDOUT
 * @filename: file being read
 * @letters: no of letters to be read
 * Return: w- number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ec;
	ssize_t w;
	ssize_t t;

	ec = open(filename, O_RDONLY);
	if (ec == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(ec, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(ec);
	return (w);
}

