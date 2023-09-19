#include "main.h"
/**
 * _strlen - get length of a string.
 * Return: int
 * @s: pointer to string to calc its length
 */
int _strlen(char *s)
{
	int len, idx;

	len = 0;
	idx = 0;
	while (1)
	{
		if (*(s + idx) != '\0')
		{
			len++;
			idx++;
		}
		else
		{
			return (len);
		}
	}
}
/**
 * print_rev -  prints a string, in reverse, followed by a \n.
 * @s: pointer to string to print
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len + 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
