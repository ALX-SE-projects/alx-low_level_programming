#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * Return: ptr to newly created memory block
 * @ptr: is a pointer to the memory previously allocated
 *   with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		else
			return (malloc(0));
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	_ptr = (char *) malloc(new_size);
	for (i = 0; i < old_size && i < new_size; i++)
		_ptr[i] = ((char *) ptr)[i];
	free(ptr);
	return (_ptr);
}
