#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * Return: a pointer to the memory area s
 * @n: the first n bytes of the memory area
 * @s: pointed to by s
 * @b: with the constant byte b
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		*((char *) (s + n * (sizeof(char) - 1))) = b;
		n--;
	}
	return (s);
}
