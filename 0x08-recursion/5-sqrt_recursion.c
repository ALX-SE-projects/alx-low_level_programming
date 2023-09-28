#include "main.h"
/**
 * chk - checks if @x is root of @n
 * Return: square root of @n
 * @x: int
 * @n: int
 */
int chk(int x, int n)
{
	if (n == 0)
		return (0);
	else if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (chk(x + 1, n));
}
/**
 * _sqrt_recursion - get square root of @n
 * Return: int
 * @n: int
 */
int _sqrt_recursion(int n)
{
	return (chk(1, n));
}
