#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append text to.
 * @text_to_append: The content to be added to the file.
 * Return: 1 if the file exists and the operation is successful,
 * -1 if the file does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_to_append)
{
	int file_descriptor;
	int num_letters;
	int result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_to_append)
	{
		for (num_letters = 0; text_to_append[num_letters]; num_letters++)
			;

		result = write(file_descriptor, text_to_append, num_letters);

		if (result == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
