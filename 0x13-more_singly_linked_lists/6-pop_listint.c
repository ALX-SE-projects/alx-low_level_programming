#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * , and returns the head node’s data (n).
 * @head: head of list
 * Return: n int attr or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *tmp, *current;

	if (!head)
		return (0);
	val = (*head)->n;
	current = (*head)->next;
	tmp = *head;
	*head = current;
	free(tmp);
	return (val);
}
