#include <stdio.h>
#include <math.h>
/**
 * get_largest_prime_factor - ...
 * Return: int
 * @num: number to examine
 */
long long int get_largest_prime_factor(long long int num)
{
	long long int lf;

	lf = -1;
	while (num % 2 == 0)
	{
		lf = 2;
		num = num / 2;
	}
	for (long long int i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			lf = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		lf = num;
	}
	return (lf);
}

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	printf("%lld\n", get_largest_prime_factor(612852475143));
	return (0);
}
