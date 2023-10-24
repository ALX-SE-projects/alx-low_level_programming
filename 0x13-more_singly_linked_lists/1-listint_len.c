#include "lists.h"
/**
 * listint_len - get the number of elements in a linked listint_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *l = &(*h);
	unsigned int count = 0;

	if (h)
	{
		while (l)
		{
			count++;
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	return (count);
}
