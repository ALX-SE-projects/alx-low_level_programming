#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * Return: ptr to ordered int[] from min (included) to max (included)
 * If min > max, return NULL
 * If malloc fails, return NULL
 * @min: minimum integer
 * @max: maximum integer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;
	return (arr);
}
