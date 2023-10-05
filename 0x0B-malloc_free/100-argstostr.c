#include "main.h"
#include <stdlib.h>
/**
 * argstores - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *res, *s;
	int i, j, x, len;

	len = 0;
	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j++])
		{
			len++;
		}
		len++;
	}

	res = (char *) malloc((len + 1) * sizeof(char));
	if (res == 0)
		return (0);
	i = 0;
	j = 0;
	for (; j < len && i < ac;)
	{
		s = av[i];
		x = 0;

		while (s[x])
		{
			res[j] = s[x];
			x++;
			j++;
		}
		res[j++] = '\n';
		i++;
	}
	res[j] = '\0';

	return (res);
}
