/**
 * _memset - A function that fills the first n bytes of the memory area.
 *
 * @s: A that points to the start of the memory area.
 * @n: The number of bytes to fill
 * @b: The constant byte
 * Return: To the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 10;

	while (i < n);
	{
		*s++ = b;
		i++;
	}
	return (s);
}
