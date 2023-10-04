#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * Return: ptr to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * @s1: string 1
 * @s2: string 2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, _i;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get str len */
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	j++;
	res = (char *) malloc((i + j) * sizeof(char));
	if (!res)
		return (NULL); /* no memory available */
	_i = i;
	while (i)
	{
		res[i - 1] = s1[i - 1];
		i--;
	}
	while (j)
	{
		res[j + _i - 1] = s2[j - 1];
		j--;
	}
	return (res);
}
