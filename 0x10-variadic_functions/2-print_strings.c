#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between nos
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *p;

	if (separator == NULL)
	{
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
