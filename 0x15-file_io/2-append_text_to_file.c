#include "main.h"

/**
 * append_text_to_file - Append text to a file
 * @filename: Name of the file
 * @text_content: Text to append
 *
 * Return: On failure or if filename is NULL - -1
 *         On write permission issues or non-existing file - -1
 *         Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
