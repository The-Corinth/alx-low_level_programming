#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_descriptor_from: file descriptor for the source file.
 * @file_descriptor_to: file descriptor for the destination file.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_descriptor_from, int file_descriptor_to, char *argv[])
{
	if (file_descriptor_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_descriptor_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_descriptor_from, file_descriptor_to, err_close;
	ssize_t num_chars, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_descriptor_from = open(argv[1], O_RDONLY);
	file_descriptor_to = open(argv[2],
			O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_descriptor_from, file_descriptor_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_descriptor_from, buffer, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		num_written = write(file_descriptor_to, buffer, num_chars);
		if (num_written == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_descriptor_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor_from);
		exit(100);
	}

	err_close = close(file_descriptor_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor_to);
		exit(100);
	}
	return (0);
}
