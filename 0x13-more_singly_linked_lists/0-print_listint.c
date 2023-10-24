#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *l = &(*h);
	unsigned int count = 0;

	if (h)
	{
		while (l)
		{
			count++;
			printf("%d\n", l->n);
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	return (count);
}
