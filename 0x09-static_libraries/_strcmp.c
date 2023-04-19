#include "main.h"
/**
 * _strcmp - two null terminated characters lexicographically
 * @s1: null terminated string
 * @s2: null terminated string
 * Return: integer value greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	s1++;
	s2++;
	return (*s1 - *s2);
}
