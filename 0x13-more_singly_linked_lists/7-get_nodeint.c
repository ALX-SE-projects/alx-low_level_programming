#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of list
 * @index: idx requested
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index)
	{
		head = head->next;
		if (!head)
			break;
		index--;
	}
	if (index)
		return (NULL);
	return (head);
}
