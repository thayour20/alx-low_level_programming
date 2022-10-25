#include "main.h"

/**
 * swap_int(&a, &b)
 * @a: first integer
 * @b: second integer
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
