#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of string
 *
 * @str: string
 *
 * Return: lenghth of string
 *
 */

int _strlen(char *str)
{
	int len;

	while (*str++)
		len++;
	return (len);
}

/**
 * *_strcpy - copies strings
 *
 * @src: source for string
 * @dest: destination for string
 *
 * Return: copied string
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = _strcpy(name, p->name);
	p->age = age;
	p->owner = _strcpy(owner, p->owner);
	return (p);
}
