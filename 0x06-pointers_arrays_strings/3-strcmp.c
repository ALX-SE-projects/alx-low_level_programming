#include "main.h"
/**
 * _strcmp - compares two strings
 * Return: int (see $ man strcmp)
 * @s1: string 1
 * @s2: string 2
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;
	while (1)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == 0)
			{
				return (0);
			}
			else
			{
				i++;
				continue;
			}
		}
		else
		{
			break;
		}
	}
	/* i is the matched length */
	n = 15;
	/* find which one is larger */
	while (1)
	{
		if (s1[i] == 0)
		{
			return (-n);
		}
		else if (s2[i] == 0)
		{
			return (n);
		}
		i++;
	}
}
