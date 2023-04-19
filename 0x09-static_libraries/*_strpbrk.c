#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - first occurrence of a character of one string in another
 * @s: pointer to string to be searched
 * @accept: pointer to string of acceptable characters
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')

	{
		if (strchr(accept, *s) != NULL)
			return (s);
	}
	s++;
	return (NULL);
}
