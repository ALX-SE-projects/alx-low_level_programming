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
	unsigned int last = 0;

	if (head)
	{
		l = head;
		while (l->next || last)
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
