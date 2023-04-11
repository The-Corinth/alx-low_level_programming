#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * Return: Null
 */
char *_strdup(char *str)
{
	char *str_dup;

	str_dup = malloc(strlen(str) + 1); /*Duplicate string is allocated memory*/
	if (str == NULL)
		return (NULL); /*return null if the sring is NULL*/
	if (str_dup == NULL)
		return (NULL); /*Not enough memory*/
	strcpy(str_dup, str);
	return (str_dup);/*The original string is copied to duplicated string*/
}
