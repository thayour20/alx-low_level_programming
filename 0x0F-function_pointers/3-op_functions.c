#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number.
 * Return: add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to sub
 * @a: a
 * @b: b
 * Return: diff
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: a
 * @b: b
 * Return: multi
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: a
 * @b: b
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - modulus
 * @a: a
 * @b: b
 * Return: modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

