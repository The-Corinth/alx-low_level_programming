#include "main.h"
/**
 * _strncat - concanates src to end of dest
 * @dest: pointer to character array
 * @src: pointer to character array
 * @n: maximum number of characters
 * Return: pointer to the beginning of the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
		p++;
	while (*src && n--)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
