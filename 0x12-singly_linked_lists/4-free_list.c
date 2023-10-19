#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of that list
 */
void free_list(list_t *head)
{
	list_t *l = NULL, *tmp;

	if (head)
	{
		l = head;
		while (1)
		{
			free(l->str);
			if (l->next)
			{
				tmp = l->next;
				free(l);
				l = tmp;
			}
			else
			{
				free(l);
				break;
			}

		}
	}
}
