#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/*
 * print_list -  prints all the elements of a list_t list
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t l = *h;
	unsigned int last = 1, len = 0;
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
