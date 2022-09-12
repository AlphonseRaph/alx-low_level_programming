#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Print nos 1-10 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
