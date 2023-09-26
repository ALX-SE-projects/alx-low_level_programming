#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2D array of strings
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		j = 0;
		while (a[i][j])
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
	}
}
