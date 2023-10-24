#include "lists.h"
/**
 * chek - check if node already printed
 * @head: first node of list
 * @ptr: node to check
 * @until: idx to stop checking at
 * Return: bool
 */
unsigned int chek(const listint_t *head, const void *ptr, int until)
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of list
 * Return: len of list
 */
size_t get_list_len(const listint_t *head)
{
	const listint_t *l = &(*head);
	unsigned int count = 0;

	if (head)
	{
		while (l)
		{
			count++;
			if (chek(head, l, count - 1))
			{
				return (count - 1);
			}
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	return (count);
}
/**
 * free_listint_safe - frees a listint_t list.
 * @h: head of list
 * Return:  size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *ll;
	listint_t *tmp = NULL, *l;
	unsigned int len, i;

	if (h)
	{
		ll = *h;
		len = get_list_len(ll);
		l = *h;
		for(i = 0; i < len; i++)
		{
			tmp = l->next;
			free(l);
			l = tmp;
		}
	}
	*h = NULL;
	return (len);
}
