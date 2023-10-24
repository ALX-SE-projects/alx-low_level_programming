#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * and sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head)
	{
		while (*head)
		{
			nxt = (*head)->next;
			free(*head);
			head = &nxt;
		}
		*head = NULL;
	}
}
