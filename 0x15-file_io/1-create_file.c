#include "main.h"

/**
 * create_file - Create a file with the given name and content
 * @filename: Name of the file to create
 * @text_content: Text content to write to the file
 *
 * Return: On success, returns 1. On failure, returns -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;/*Integer variables declarations*/

	if (filename == NULL)/*Check if the filename is NULL
			       *and return -1 if true
			       */
		return (-1);

	if (text_content != NULL)/*Calculate the length of the text
				   *content if it's not NULL
				   */
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
