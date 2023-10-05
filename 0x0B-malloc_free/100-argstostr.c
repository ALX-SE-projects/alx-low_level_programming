#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, idx = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++; /* for \n */
	}
	res = (char *) malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			res[idx] = av[i][j];
			idx++;
			j++;
		}
		res[idx] = '\n';
		idx++;
	}
	return (res);
}
