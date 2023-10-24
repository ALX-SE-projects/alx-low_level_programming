#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head, *o;


    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 4);
    print_listint(head);
    printf("-----------------\n");
    o = insert_nodeint_at_index(&head, 5, 4096);
    if (!o)
        printf("fk\n");
    print_listint(head);
    free_listint2(&head);
    return (0);
}
