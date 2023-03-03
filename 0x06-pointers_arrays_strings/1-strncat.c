#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: char *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x;
	int y;

	x = 0;
	y = 0;
	while (*(dest + x) != '\0')
		x++;
	while (*(src + y) != '\0')
		y++;
	for (i = 0; i < y && i < n; i++)
	{
		dest[x++] = src[i];
	}
	return (dest);
}
