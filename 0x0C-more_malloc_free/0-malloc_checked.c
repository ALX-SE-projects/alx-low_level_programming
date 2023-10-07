#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * Return: a pointer to the allocated memory
 * @b: size in bytes
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
