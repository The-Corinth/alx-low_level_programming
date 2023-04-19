#include "main.h"
#include <stddef.h>
/**
 * _strchr - first occurence of a particular character in a string
 * @s: pointer to the string
 * @c: character to be searched
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	s++;
	if (*s == c)
		return (s);
	return (NULL);
}
