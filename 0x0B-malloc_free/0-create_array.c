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
	if (size == 0)
		return (NULL);
	char *arr = (char *) malloc(size * sizeof(char));
	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
