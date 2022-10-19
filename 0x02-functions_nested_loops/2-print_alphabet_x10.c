#include "main.h"

/**
 * print_alphabet_x10 - print alpha. ten times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	chal x = 0;
	chal a;

	while (x <= 10)

	{

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
			x++;
			_putchar('\n');
		}
	return (0);
}
