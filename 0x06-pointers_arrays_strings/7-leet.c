#include "main.h"
/**
 * leet - encodes a string into 1337
 * Return: encoded string
 * @s: string to be encoded
 */
char *leet(char *s)
{
	int lc[] = {'a', 'e', 'o', 't', 'l'};
	int uc[] = {'A', 'E', 'O', 'T', 'L'};
	int lt[] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (lc[j] == s[i] || uc[j] == s[i])
			{
				s[i] = lt[j];
			}
		}
		i++;
	}
	return (s);
}
