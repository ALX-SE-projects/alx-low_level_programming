#include "lists.h"
/**
 * sum_listint - get sum of all the data (n) of a listint_t linked list
 * @head: head of list
 * Return: sum of all items
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
