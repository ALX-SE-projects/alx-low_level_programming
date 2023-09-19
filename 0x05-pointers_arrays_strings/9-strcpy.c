#include "main.h"
/**
 * _strcpy - get length of a string.
 * Return: char*
 * @dest: pointer to string to calc its length
 * @src: pointer to string to calc its length
 */
char *_strcpy(char *dest, char *src)
{
	int xx, oo;

	oo = 0;
	for (xx = 0; src[xx] != '\0'; xx++)
	{
		dest[oo] = src[xx];
		oo++;
	}
	dest[oo] = '\0';

	return (dest);
}
