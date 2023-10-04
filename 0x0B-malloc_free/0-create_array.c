#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *                 and initializes it with a specific char
 * Return: ptr to arr || NULL if size = 0 (fails)
 * @size: size of array
 * @c: char to fill the array with
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
