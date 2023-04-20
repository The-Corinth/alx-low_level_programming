#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @f: a function pointer
 * @name: parameter taken by print_name function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int len = 0;
	int i = 0;
	char *buffer = (char *)malloc((len + 1) * sizeof(char));

	while (name[len] != '\0')
	{
		len++;
	}

	if (buffer == NULL)
	{
		exit(1);
	}

	while (name[i] != '\0')
	{
		buffer[i] = name[i];
		i++;
	}
	buffer[i] = '\0';
	f(buffer);
	free(buffer);
	buffer = NULL;
}
