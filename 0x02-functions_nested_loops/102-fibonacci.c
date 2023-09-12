#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int counter;
	int i;
	int j;
	int k;

	i = 1;
	j = 2;
	printf("%d, ", i);
	printf("%d, ", j);
	counter = 2;
	while (1)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d", k);
		counter++;
		if (counter != 50)
		{
			putchar(',');
			putchar(' ');
		} else {
			break;
		}
	}
	putchar('\n');
	return (0);
}
