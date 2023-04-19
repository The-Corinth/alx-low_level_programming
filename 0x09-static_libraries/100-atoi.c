#include "main.h"
/**
 * _atoi - converting string to an integer
 * @s: string to be checked
 * Return: value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s != '\0')
	if (*s == '-')
		sign = -1;
	else if (*s == '+')
		sign = 1;
	else if (*s >= '0' && *s <= '9')
		result = result * 10 + (*s - '0');
	else if (result > 0)
		break;
	s++;
	return (sign * result);
}
