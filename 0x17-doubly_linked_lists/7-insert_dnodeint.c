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

	new = malloc(sizeof(dlistint_t));
	if ((!new) || (!h))
		return (NULL);
	new->n = n;
	current = *h;
	if (idx != 0)
		while (idx - 1)
		{
			if (current->next)
				current = current->next;
			else
				return (NULL);
			idx--;
		}
	if (idx != 0)
	{
		new->prev = current;
		new->next = current->next;
		current->next->prev = new;
		current->next = new;
	}
	else if (*h)
	{
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
	}
	return (new);
}
