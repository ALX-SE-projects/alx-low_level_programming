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
 * rev_string -  reverses a string.
 * @s: pointer to string to reverse;
 */
void rev_string(char *s)
{
	int len, i;
	char tmp_str[_strlen(s)];

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		tmp_str[i - (len - 1)] = *(s + i);
	}
	for (i = 1; i < len; i++)
	{
		*(s + i) = tmp_str[i];
	}

}
