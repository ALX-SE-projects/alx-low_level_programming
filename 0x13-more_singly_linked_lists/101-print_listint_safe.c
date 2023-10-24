#include "lists.h"
/**
 * chk - check if node already printed
 * @head: first node of list
 * @ptr: node to check
 * @until: idx to stop checking at
 * Return: bool
 */
unsigned int chk(const listint_t *head, const void *ptr, int until)
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
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *l = &(*head);
	unsigned int count = 0;

	if (head)
	{
		while (l)
		{
			count++;
			if (chk(head, l, count - 1))
			{
				printf("-> [%p] %d\n", (void *)l, l->n);
				return (count);
			}
			else
				printf("[%p] %d\n", (void *)l, l->n);
			if (l->next)
				l = l->next;
			else
				break;
		}
	}
	return (count);
}
