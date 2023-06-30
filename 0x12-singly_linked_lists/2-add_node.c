#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of list
 * @head: pointer to struct
 * @str: string
 *
 * Return: address of the new element
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	while (str[len] != '\0')
		len++;
	temp->len = len;
	if (*head != NULL)
		temp->next = *head;
	if (*head == NULL)
		temp->next = NULL;
	*head = temp;
	return (*head);
}


