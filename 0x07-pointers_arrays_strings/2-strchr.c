#include "main.h"
/**
 * _strchr - locates a character in a string
 * Return: a pointer to the first occurrence of the character @c
 * @c: char or NULL
 * @s: string
 */
char *_strchr(char *s, char c)
{
	int idx;

	idx = 0;
	while (1)
	{
		switch (s[idx])
		{
			case c:
				return ((char *) (s[idx]));
			case 0:
				return ((char *) '\0');
		}
		idx++;
	}
}
