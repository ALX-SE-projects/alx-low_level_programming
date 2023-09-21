#include "main.h"
/**
 * _strncpy - copies a string
 * Return: string
 * @dest: dest string
 * @src: src string
 * @n: most n bytes from src to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dst_len, src_len;

	dst_len = 0;
	for (src_len = 0; src_len < n; src_len++)
	{
		if ((dest[dst_len] == 0) || (src[src_len] == 0))
		{
			break;
		}
		else
		{
			dest[dst_len] = src[src_len];
			dst_len++;
		}
	}

	return (dest);
}
