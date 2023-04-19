#include "main.h"
#include <stddef.h>
/**
 * _strstr - first occurrence of a substring
 * @haystack: pointer to string to be searched
 * @needle: substring to be found
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
