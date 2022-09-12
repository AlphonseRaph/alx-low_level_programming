#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Print numbers 1 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 1; ch <= 10; ch++)
		printf("%d", ch);
	printf("\n");
	return (0);
}
