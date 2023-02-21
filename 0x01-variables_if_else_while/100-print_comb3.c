#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 48;

	while (z < 57)
	{
		int i = 48;

		while (i <= 57)
		{
			putchar(z);
			putchar(i);
			putchar(',');
			putchar(' ');
			i++;
		}
		z++;
	}
putchar('\n');
return (0);
}
