#include "main.h"
/**
 * _memcpy - copies @n bytes from memory area @src to memory area @dest
 * Return: a pointer to @dest
 * @n: bytes from memory area @src
 * @src: source area
 * @dest: dest area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*(dest + (n - 1) * sizeof(char)) = *(src + (n - 1) * sizeof(char));
		n--;
	}
	return (dest);
}
