#include "main.h"
/**
 * _memcpy - copy block of memory from one location to another
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n-- > 0)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
