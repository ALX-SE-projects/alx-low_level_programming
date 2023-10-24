#include "lists.h"
/**
 * delete_nodeint_at_index - del node at index @index
 * @head: head of list
 * @index: idx
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, j;
	listint_t *tmp, *current;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	j = index - 1;
	current = *head;
	for (i = 0; i < j; i++)
	{
		if (!(current->next))
			break;
		current = current->next;
		index--;
	}
	if (index - 1 > 0)
		return (-1);
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
