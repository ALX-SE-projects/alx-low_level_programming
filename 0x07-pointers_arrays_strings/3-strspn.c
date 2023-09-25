#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * Return: the number of bytes in the initial segment of
 *         @s which consist only of bytes from @accept
 * @s: string
 * @accept: string
 */
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ln;
	int i, j;

	ln = 0;
	i = 0;
	while (1)
	{
		if (s[i] == 0)
		{
			break;
		}
		j = 0;
		while (1)
		{
			if (accept[j] == s[i])
			{
				ln++;
				break;
			}
			else if (accept[j] == 0)
			{
				if (ln != 0)
				{
					return (ln);
				}
				break;
			}
			j++;
		}
		i++;
	}
	return (ln);
}
