#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strspn - length of initial segment of string s
 * @s: pointer to string to be searched
 * @accept: pointer to string of acceptable characters
 * Return: length of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
