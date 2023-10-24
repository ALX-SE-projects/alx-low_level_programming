#include "lists.h"
/**
 * chok - check if node loops
 * @head: first node of list
 * @ptr: node to check
 * @until: idx to stop checking at
 * Return: bool
 */
unsigned int chok(listint_t *head, const void *ptr, int until)
{
	const listint_t *l = &(*head);
	int i;

	for (i = 0; i < until; i++)
	{
		if (ptr == l)
			return (1);
		l = l->next;
	}
	return (0);
}

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of list
 *
 * Return: The address of the node where the loop starts
 * , or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l = &(*head);
	unsigned int count = 0;

	if (head)
	{
		while (l)
		{
			count++;
			if (chok(head, l, count - 1))
			{
				return (l);
			}
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	return (NULL);
}
