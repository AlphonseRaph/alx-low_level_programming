#include "main.h"

/**
 * _isdigit - Check for a digit
 *
 * @c: To be checked
 *
 *Return: 1 if digit, o otherwise
 */

int _isdigit(int c);
{
	for (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}
