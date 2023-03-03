#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string one
 * @src: string two
 * Return: char *dest
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < y; i++)
	{
		dest[x++] = src[i];
	}
	return (dest);
}
