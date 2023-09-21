#include "main.h"
/**
 * is_alph_lower - checks if @c is alphabet and lowercase
 * Return: 0 or 1
 * @c: char to be checked
 */
int is_alph_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_sep - checks if c is a word separator
 * Return: 0 or 1
 * @c: char to be checked
 */
int is_sep(char c)
{
	switch (c)
	{
		case ' ':
		case '	':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * Return: string  with all words capitalized
 * @s: string to be processed
 */
char *cap_string(char *s)
{
	int i, capit;

	i = 0;
	while (s[i])
	{
		capit = 0;
		if (!is_alph_lower(s[i]))
		{
			i++;
			continue;
		}
		else
		{
			if (i == 0)
			{
				capit = 1;
			}
			else if (is_sep(s[i - 1]))
			{
				capit = 1;
			}
			if (capit)
			{
				s[i] -= 'a' - 'A';
			}
		}
		i++;
	}
	return (s);
}
