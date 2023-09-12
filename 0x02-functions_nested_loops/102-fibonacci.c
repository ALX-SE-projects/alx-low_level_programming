#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int counter;
	unsigned long int i;
	unsigned long int j;
	unsigned long int k;

	i = 1;
	j = 2;
	printf("%lu, ", i);
	printf("%lu, ", j);
	counter = 2;
	while (1)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		counter++;
		if (counter != 50)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
