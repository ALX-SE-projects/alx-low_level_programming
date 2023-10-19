#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list
 * Return: size of list
 */
size_t list_len(const list_t *h)
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
		if (l.next)
			l = *l.next;
		len++;
	}
	return (len);
}
