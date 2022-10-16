#include <stdio.h>
#include <stdlib.h>
/**
 * main - print lower case letter with the exception of e and q
 * Return: always 0
 */

int main(void)

{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')

		putchar(a);
	}

		putchar('\n');

	return (0);

}
