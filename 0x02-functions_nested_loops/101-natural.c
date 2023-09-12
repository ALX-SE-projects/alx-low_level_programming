#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int result;

	for (i = 0; i < 1024; i++)
	{
		if (!(i % 3) || !(i % 5))
			result += i;
	}
	printf("%d\n", result);
	return (0);
}
