#include "main.h"
#include  <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: NULL if ac == 0 or av == NULL
 * otherwise return a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *cat, *temp;
	int arg, len = 0;

	if (!ac || !av)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		len += strlen(av[arg]) + 1;

	cat = malloc(len * sizeof(char));
	if (!cat)
		return (NULL);

	temp = cat;
	for (arg = 0; arg < ac; arg++)
	{
		strcpy(temp, av[arg]);
		temp += strlen(av[arg]);
		*temp++ = '\n';
	}
	*temp = '\0';

	return (cat);
}
