#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print its content to STDOUT
 * @filename: The name of the text file to be read
 * @letters: The number of letters to read and print
 * Return: w- On success, it returns the actual number of
 * bytes read and printed (w).
 * On failure or if filename is NULL, it returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;/*Variable declaration*/
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	/*Open, read, and print a file's content*/
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
