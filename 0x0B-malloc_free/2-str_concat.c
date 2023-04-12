#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: Null
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	size_t length_s1 = strlen(s1);
	size_t length_s2 = strlen(s2);

	str_concat = malloc(length_s1 + length_s2 + 1);
	if (!s1)
		s1 = "Betty";
	if (!s2)
		s2 = "Holberton";
	if (!str_concat)
		return (NULL);
	strcpy(str_concat, s1);
	strcat(str_concat, s2);
	return (str_concat);
}
