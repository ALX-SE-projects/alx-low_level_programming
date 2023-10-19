#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: list string attr
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l = malloc(sizeof(list_t));

	if (!l)
		return (NULL);
	l->str = strdup(str);
	l->len = strlen(str);
	l->next = *head;
	*head = &*l;
	return (l);
}
