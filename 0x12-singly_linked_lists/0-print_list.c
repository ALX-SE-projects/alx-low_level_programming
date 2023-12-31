#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * Return: the number of nodes
 * @h: list
 */
size_t print_list(const list_t *h)
{
	list_t l;
	unsigned int last = 1, len = 0;

	if (!h)
		return (0);
	l = *h;
	while (l.next || last)
	{
		if ((l.next) == NULL)
			last = 0;
		if (l.str != NULL)
			printf("[%u] %s\n", l.len, l.str);
		else
			printf("[0] (nil)\n");
		if (l.next)
			l = *l.next;
		len++;
	}
	return (len);
}
