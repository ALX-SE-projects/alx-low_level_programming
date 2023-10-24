#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: is the index of the list where the new node should be added
 * @n: n int attr of new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *head;

	if (idx)
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!(current->next))
				break;
			current = current->next;
			idx--;
		}
		if (idx - 1 > 0)
		{
			free(new);
			return (NULL);
		}
		if (current)
		{
			new->next = current->next;
			current->next = new;
		}
		else
			new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
