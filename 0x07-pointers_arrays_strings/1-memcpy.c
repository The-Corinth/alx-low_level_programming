/**
 *
 * _memcpy - A function that copies n bytes.
 *
 * @src - The memory area to be copied from.
 *
 * @dest - Memory area to be copied to.
 *
 * @n - The number of bytes to be copied.
 *
 * Return : dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 10;

	while (i < n)
	*dest++ = *src++;
	i++;
	return (dest);
}
