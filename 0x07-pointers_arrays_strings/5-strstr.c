#include "main.h"
/**
 * _strstr -  locates a substring
 *              it finds the first occurrence of the substring @needle
 *              in the string @haystack.
 *              The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring
 *          , or NULL if the substring is not found
 * @needle: string
 * @haystack: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, x;

	x = -1;
	i = 0;
	j = 0;
	k = 0;
	while (1)
	{
		if (haystack[i] == needle[j])
		{
			x = i;
			while (1)
			{
				if (haystack[k] == needle[j])
				{
					k++;
					j++;
					if (needle[j] == 0)
					{
						return ((char *) (&haystack[x]));
					}
					continue;
				}
				if (needle[j] == 0)
				{
					return ((char *) (&haystack[x]));
				}
				else
				{
					x = -1;
					j = 0;
					break;
				}
			}
		}
		i++;
		k = i;
	}
}
