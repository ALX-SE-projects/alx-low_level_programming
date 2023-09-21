#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	int *tmp;

	tmp = (int *) malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		tmp[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = tmp[i];
	}
}
