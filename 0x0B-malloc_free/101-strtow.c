#include "main.h"
#include <stdlib.h>

/**
 * count_words - counting the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
static int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	return (count);
}

/**
 * strtow - it splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, n_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	n_words = count_words(str);
	words = malloc(sizeof(char *) * (n_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < n_words; i++)

	while (*str == ' ')
		str++;

	len = 0;
	while (str[len] != ' ' && str[len] != '\0')
		len++;

	words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
			for (j = 0; j < i; j++)
				free(words[j]);
	free(words);
	return (NULL);

	for (j = 0; j < len; j++)
		words[i][j] = *(str++);
	words[i][j] = '\0';

	words[n_words] = NULL;

	return (words);
}
