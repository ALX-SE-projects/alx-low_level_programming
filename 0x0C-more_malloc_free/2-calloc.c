#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * allocates memory for an array of @nmemb elements of @size
 * bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * Return: ptr to allocated memory
 * @nmemb: number of elements
 * @size: size of each one of these elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = (char *) malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(ptr + i) = 0;
	return ((void *) ptr);
}
