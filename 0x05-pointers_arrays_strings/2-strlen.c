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
