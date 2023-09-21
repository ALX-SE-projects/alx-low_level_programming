#include "main.h"
/**
 * _strcmp - compares two strings
 * Return: int (see $ man strcmp)
 * @s1: string 1
 * @s2: string 2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

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
			return (s1[i] - s2[i]);
		}
	}
}
