#include "main.h"

/**
 * print_alphabet_x10 - print alpha. ten times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char x = 0;
	char a;

	while (x <= 9)

	{

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
			x++;
			_putchar('\n');
		}



}
