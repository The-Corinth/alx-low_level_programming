#include "main.h"
/**
 * _memset - fill a block of memory with a particular value
 * @s: pointer
 * @b: block of memory
 * @n: number of bytes to fill
 * Return: pointer to block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
