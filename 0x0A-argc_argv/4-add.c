#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integers
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
 	return (oi * pn);
}

/**
 * main - function
 *
 * @argc: no of arguments
 * @argv: pointer to arguments
 *
 * Return: 0 (always)
 */

int main(int argc, char **argv)
{
	int i, sum;

	if (argc < 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if ((_atoi(argv[i]) > 0) || (_atoi(argv[i]) < 10))
		{
			sum += _atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
return (0);
}
