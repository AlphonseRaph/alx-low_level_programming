#include "main.h"

/**
 * _abs - Entry point
 *
 * @c: parameter to be checked
 *
 * Return: Always 0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
