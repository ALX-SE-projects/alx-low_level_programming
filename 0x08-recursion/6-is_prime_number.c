#include "main.h"
int is_prime(int n, int i);
/**
  * is_prime_number - chk if @n is a prime number or not
  * @n: number to chk
  * Return: 1 if n is a prime number, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, n - 1));
}
/**
  * is_prime - chk if a @n is prime
  * @n: num to chk
  * @i: iterator
  * Return: 1 if @n is prime, 0 otherwise
  */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (i > 0 && n % i == 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}
