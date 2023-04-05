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
	int k;

	k = 0;

	for (; *s != '\0' ;)
	{
		if (*s == c)
			return (s);
	else if (*(s + 1) == c)
		return (s + 1);
	k++;
	{
	return (0);
}
