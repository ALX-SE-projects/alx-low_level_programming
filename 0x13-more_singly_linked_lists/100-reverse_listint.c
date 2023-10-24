#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL, *c = *head;

	if (!head)
		return (NULL);
	while (c)
	{
		next = c->next;
		c->next = prev;
		prev = c;
		c = next;
	}
	*head = prev;
	return (*head);
}
