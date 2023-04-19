#include "main.h"
/**
 * _strncpy - copying specified number of characters from source
 * @dest: pointer to a character string
 * @src: pointer to a character array
 * @n: maximum number of characters to copy
 * Return: pointer to the beginning of the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
