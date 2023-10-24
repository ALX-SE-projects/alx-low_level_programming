#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of list
 * @n: int attr of list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	if (!*head)
		*head = new;
	else
	{
		while (*head)
		{
			if ((*head)->next)
				head = &((*head)->next);
			else
				break;
		}
		if (*head)
			(*head)->next = new;
	}
	new->n = n;
	new->next = NULL;
	return (new);
}
