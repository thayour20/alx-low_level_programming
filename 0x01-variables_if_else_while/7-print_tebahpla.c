#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing alpha. in reverse order
 * using putchar
 * Return: alwys 0
 */

int main(void)

{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);

	}
		putchar('\n');

	return (0);

}
