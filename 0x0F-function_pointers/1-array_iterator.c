#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - exec a func given as a param on each elmnt of an arr
 * @array: arr to handle
 * @size: size of array
 * @action: ptr to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
