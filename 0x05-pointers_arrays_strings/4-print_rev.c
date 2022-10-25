#include "main.h"

/**
 * print_rev - to print a string in reverse other
 * @s: string to be printed
 * Return: always 0
 */

void print_rev(char *s)
{

	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
