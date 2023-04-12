#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be allocated memory in OS
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
	if (strcpy(str_dup, str))
		return (str_dup); /*The original string is copied to duplicated string*/
	if (strcpy(str_dup, str) == NULL)
		free(str_dup);/* freeing memory*/
	return (NULL);
}
