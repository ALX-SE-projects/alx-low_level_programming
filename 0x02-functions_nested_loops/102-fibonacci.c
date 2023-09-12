#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int counter;
	long long unsigned int i;
	long long unsigned int j;
	long long unsigned int k;

	i = 1;
	j = 2;
	printf("%llu, ", i);
	printf("%llu, ", j);
	counter = 2;
	while (1)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%llu", k);
		counter++;
		if (counter != 100)
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
