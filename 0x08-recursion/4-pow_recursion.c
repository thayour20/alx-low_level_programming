#include "main.h"

/**
 * _pow_recursion - main prog
 * @x: int x
 * @y: int y
 * Return: always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
