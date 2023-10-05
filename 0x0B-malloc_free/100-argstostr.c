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
		for (j = 0; ; j++)
			len++;
		len++; /* for \n */
	}
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		do {
			res[idx] = av[i][j];
			idx++;
			j++;
		} while (av[i][j] != '\0');
		res[idx] = '\n';
		idx++;
	}
	res[idx] = '\0';
	return (res);
}
