#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head->next == NULL)
	{
		return (NULL);
	}
	else if (i <= index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
