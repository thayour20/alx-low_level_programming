#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - to check if a number is prime number
 * @n: integer n
 * Return: 1 if n is prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - to calculate if a prime is peime reculsive
 * @n: number to evaluate
 * @i: iterate
 * Return: prime number
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
		return (actual_prime(n, i - 1));
}
