#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: list of args
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0, tmp, block;
	if (argc != 2)
	{
		char *err = "Error\n";
		do
		{
			_putchar(*err);
		} while (*err++);
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents)
	{
		if (cents >= 25)
			block = 25;
		else if (cents >= 10)
			block = 10;
		else if (cents >= 5)
			block = 5;
		else if (cents >= 2)
			block = 2;
		else if (cents >= 1)
			block = 1;
		tmp = cents / block;
		coins += tmp;
		cents %= block;
	}
	printf("%d\n", coins);
	return (0);
}
