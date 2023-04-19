#include "main.h"
#include <stdio.h>
/**
 * _puts - takes a pointer to a character array
 * @s: character array
 * Return: No return
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
	s++;
	}
	putchar('\n');
}
