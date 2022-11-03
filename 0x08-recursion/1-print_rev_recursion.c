#include "main.h"

/**
 * _print_rev_recursion - print string in reverse order
 * @s: string
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
