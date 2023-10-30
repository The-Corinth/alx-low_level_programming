#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * the specified number of letters.
 * @filename: The name of the file to read.
 * @letters_to_print: The number of letters to print.
 * Return: The number of letters printed. Returns 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters_to_print)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters_to_print));
	if (!buffer)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters_to_print);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);

	free(buffer);

	return (bytes_written);
}
