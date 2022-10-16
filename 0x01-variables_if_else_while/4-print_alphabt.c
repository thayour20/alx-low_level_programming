#include <stdio.h>
#include <stdlib.h>
/**
 * main -print lower case letter with the exception of e and q
 * Return: always 0
 */

int main(void)

{
	char a;

	for (a = 'a'; a <= 'z';)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}

		putchar('\n');

	return (0);
}
