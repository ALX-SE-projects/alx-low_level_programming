#include "main.h"
/**
 * _abs - get the abs of a number
 * Return: abs of @n
 * @n: int to be checked
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
