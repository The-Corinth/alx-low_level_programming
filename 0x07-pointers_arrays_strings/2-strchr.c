#include <stdio.h>
#include <string.h>
/**
 * _strchr - Locates the first occurrence of c in s.
 *
 * @s: String to be searched for c.
 * @c: Character to be located in c.
 *
 * Return: First instance of c, or else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i))

		if (*(s + i) == c)
			return (s + i);
	i++;
	return (NULL);
}
