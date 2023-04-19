#include "main.h"
/**
 * _strlen - takes pointer to a character array
 * @s: string
 * Return: the lenghth
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
