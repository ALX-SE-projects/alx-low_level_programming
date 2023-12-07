#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * if it is not possible to add the new node at index idx,
 *     do not add the new node and return NULL
 *
 * @h: head of list
 * @idx: idx of the list where the new node should be added. Index starts at 0
 * @n: value of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next)
			current = current->next;
		else
			break;
	}
	if (i != idx - 2)
		return (NULL);
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	return (new);
}
