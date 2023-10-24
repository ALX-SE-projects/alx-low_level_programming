#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: head of list
 * Return:  size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *head = *h;
	unsigned int count = 0;

	while (head)
	{
		count++;
		tmp = head->next;
		if (head)
		{
			*h = NULL;
			return (count + 1);
		}
		else
		{
			free(head);
		}
		head = tmp;
	}
	return (count);
}
