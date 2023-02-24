#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i % 3)
		{
			printf("Fizz");
		}
		else if (i % 5)
		{
			printf("Buzz");
		}
		else if (i % 3 && 5)
		{
			printf("FizzBuzz);
		}
		else 
		{
			printf("%d", i);
		}
}

