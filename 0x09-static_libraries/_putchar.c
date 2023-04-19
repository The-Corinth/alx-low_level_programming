#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character meant for printing
 * Return: 1 on success
 * On error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
