#include "main.h"
/**
 * factorial - get factorial of a given number
 * Return: factorial of a given number
 * @n: num to get its factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
