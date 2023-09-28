#include "main.h"
/**
 * wildcmp - compare 2 strings
 * Return: bool
 * @s1: string
 * @s2: string containing wild "*"
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
	{
		return (0);
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
