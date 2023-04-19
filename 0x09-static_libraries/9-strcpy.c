#include "main.h"
/**
 * *_strcpy - copying characters in src to dest
 * @src: source location
 * @dest: destination location
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
