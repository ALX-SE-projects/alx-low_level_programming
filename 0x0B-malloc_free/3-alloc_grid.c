#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - get a ptr to a 2 dimensional array of integers
 * Return: ptr to 2D array of zeros
 * @width: width
 * @height: height
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));
		if (!arr[i])
		{
			while (i)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
