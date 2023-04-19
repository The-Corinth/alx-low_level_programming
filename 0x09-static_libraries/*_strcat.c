#include "main.h"
/**
 * _strcat - to concanate two strings
 * @dest: pointer to a character array
 * @src: pointer to a character array
 * Return: pointer to beginning of dest string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
