#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *              it locates the first occurrence in the string @s
 *              of any of the bytes in the string @accept
 * Return: a pointer to the byte in @s that matches one of the bytes in @accept
 *         , or NULL if no such byte is found
 * @s: string
 * @accept: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (1)
	{
		if (s[i] == 0)
		{
			return ((char *) '\0');
		}
		j = 0;
		while (1)
		{
			if (accept[j] == s[i])
			{
				return ((char *) (&s[i]));
			}
			else if (accept[j] == 0)
			{
				break;
			}
			j++;
		}
		i++;
	}
}
