#include "main.h"

/**
 * _puts_recursion - to pring a string
 * @s: charater
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
