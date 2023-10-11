#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: num of args
 * @argv: args arr
 *
 * Return:-
 *   0 -> success
 *   98 || 99 || 100 -> fail
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*fun)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2][0];
	fun = get_op_func(argv[2]);
	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", fun(num1, num2));
	return (0);
}
