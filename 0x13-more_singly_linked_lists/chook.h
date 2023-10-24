#ifndef CHOOOK
#define CHOOOK
/* for task #14 */
/**
 * choook - check if node loops
 * @head: first node of list
 * @ptr: node to check
 * @until: idx to stop checking at
 * Return: bool
 */
unsigned int choook(listint_t *head, const void *ptr, int until)
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
#endif
