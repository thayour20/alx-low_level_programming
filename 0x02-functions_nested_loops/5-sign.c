#include "main.h"

/**
 * print_sign - to print sign of a number
 * @n: number sign to be checked
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return ('-'0);
	}
}
