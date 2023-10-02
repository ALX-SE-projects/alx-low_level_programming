#include "main.h"

/**
 * _strcat - concatenates two strings
 * Return: string
 * @dest: dest string
 * @src: src string
 */
char *_strcat(char *dest, char *src)
{
	int dst_len, src_len;

	dst_len = 0;
	src_len = 0;
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

	while (1)
	{
		if (src[src_len])
		{
			dest[dst_len] = src[src_len];
			dst_len++;
			src_len++;
		}
		else
		{
			break;
		}
	}

	return (dest);
}
