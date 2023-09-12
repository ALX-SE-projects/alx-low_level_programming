#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int j;
	unsigned long int k;
	unsigned long int sum;

	i = 1;
	j = 2;
	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if (!(k % 2))
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
