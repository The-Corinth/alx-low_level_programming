#include "main.h"
/**
 * _isdigit - to check a character is a numeric digit
 * @c: character to be checked
 *Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
