#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit to be checked
 * Return: 1 if it is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
