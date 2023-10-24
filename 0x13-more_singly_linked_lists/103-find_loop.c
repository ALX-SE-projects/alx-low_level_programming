#include "lists.h"
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
