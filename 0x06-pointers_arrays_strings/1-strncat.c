#include "main.h"
/**
 * _strncat - concatenates two strings.
 * Return: string
 * @dest: dest string
 * @src: src string
 * @n: most n bytes from src to be copied
 */
char *_strncat(char *dest, char *src, int n)
{
	int dst_len, src_len;

	dst_len = 0;
	while (1)
	{
		if (dest[dst_len])
		{
			dst_len++;
		}
		else
		{
			break;
		}
	}

	for (src_len = 0; src_len < n; src_len++)
	{
		if (src[src_len])
		{
			dest[dst_len] = src[src_len];
			dst_len++;
		}
		else
		{
			break;
		}
	}

	return (dest);
}
