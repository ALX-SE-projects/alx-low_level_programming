#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 *   which contains a copy of the string given as a parameter
 * Return: ptr
 * @str: string to copy
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	/* get str len */
	while (str[i])
		i++;
	i++;

	/* allocate memory */
	dup = (char *) malloc(i * sizeof(char));
	if (!dup)
		return (NULL); /* no memory available */
	while (i)
	{
		dup[i - 1] = str[i - 1];
		i--;
	}
	return (dup);
}
