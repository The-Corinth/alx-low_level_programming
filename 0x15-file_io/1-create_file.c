#include "main.h"

/**
 * create_file - Creates a file and writes
 * text content to it.
 * @filename: The name of the file to create.
 * @text_to_write: The content to be written to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_to_write)
{
	int file_descriptor;
	int num_letters;
	int result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_to_write)
		text_to_write = "";

	for (num_letters = 0; text_to_write[num_letters]; num_letters++)
		;

	result = write(file_descriptor, text_to_write, num_letters);

	if (result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
