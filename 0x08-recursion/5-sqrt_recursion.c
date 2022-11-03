#include "main.h"

/**
 * _sqrt_recursion - to find the square root of a number
 * @n: square root of the number to be checked
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (actual_sqrt_reculsion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
