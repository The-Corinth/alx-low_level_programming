#include "main.h"
/**
 * _strlen_recursion : A function that returns the lenght of a string
 * @s : string
 * Return : String length
 */
int _strlen_recursion(char *s) /*Get integer string length*/
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
