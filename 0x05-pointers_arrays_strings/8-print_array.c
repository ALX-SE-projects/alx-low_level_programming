#include "main.h"
#include <stdio.h>

/**
 * print_array - get length of a string.
 * @a: pointer to string to calc its length
 * @n: pointer to string to calc its length
 */
void print_array(int *a, int n)
{
	int xx;

	for (xx = 0; xx < n; ++xx)
	{
		if (xx != (n - 1))
			printf("%d, ", a[xx]);
		else
			printf("%d", a[xx]);
	}
	printf("\n");
}
