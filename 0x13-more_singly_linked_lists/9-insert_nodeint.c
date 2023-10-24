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

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (!new)
		return (NULL);
	current = *head;
	if (idx)
	{
		while (idx - 1 > 0)
		{
			if (!(current->next))
				break;
			current = current->next;
			idx--;
		}
		if (idx)
		{
			free(new);
			return (NULL);
		}
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = head;
		*head = new;
	}

	return (new);
}
