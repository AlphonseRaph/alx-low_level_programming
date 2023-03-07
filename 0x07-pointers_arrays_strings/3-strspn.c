#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring
 *
 * @s: segment
 * @accept: accept bytes
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}
			else if (accept[index] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
