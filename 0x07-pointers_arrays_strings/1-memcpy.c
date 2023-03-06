#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: bytes from memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == 0)
		return (0);
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
