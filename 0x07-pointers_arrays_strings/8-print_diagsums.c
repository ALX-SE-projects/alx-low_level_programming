#include "main.h"
#include <stdio.h>
/**
 * get_item - gets value of item of 2D array
 *            that is casted to (int *)
 * Return: int value
 * @a: (int *) (a[][])
 * @i: subscript 1
 * @j: subscript 2
 * @size_i: rows
 */
int get_item(int *a, int i, int j, int size_i)
{
	return (*(a + (((i * size_i) + j))));
}
/**
 * print_diagsums - prints the sum of the two diagonals of
 *                  a square matrix of integers
 * @a: matrix -> 2D array
 * @size: size of @a
 */
void print_diagsums(int *a, int size)
{
	int suml = 0, sumr = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		suml += get_item(a, i, i, size);
		sumr += get_item(a, i, size - 1 - i, size);
	}
	printf("%d, %d\n", suml, sumr);
}
