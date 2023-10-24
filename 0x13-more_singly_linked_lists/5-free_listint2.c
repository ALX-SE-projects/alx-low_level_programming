#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * and sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *c;

	if (head)
	{
		c = *head;
		while (c)
		{
			tmp = c;
			c = c->next;
			free(tmp);
		}
		*head = NULL;
	}
}
