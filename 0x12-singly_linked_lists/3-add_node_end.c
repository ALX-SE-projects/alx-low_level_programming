#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: str attr
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l = NULL, *j;
	unsigned int last = 1;

	if (*head)
	{
		l = *head;
		while (l->next || last)
		{
			if ((l->next) == NULL)
				last = 0;
			if (l->next)
				l = l->next;
		}
	}
	j = malloc(sizeof(list_t));
	if (!j)
		return (NULL);
	if (l)
		l->next = j;
	else
		*head = j;
	j->next = NULL;
	j->str = strdup(str);
	j->len = strlen(str);
	return (j);
}
