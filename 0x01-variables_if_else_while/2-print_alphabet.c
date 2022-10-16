#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabelt in lower cse
 * Return: always 0
 */

int main(void)
{

	char al;

	for (al = 'a'; al <= 'z'; al++)

	{
		if (al == 'e' || al == 'q')
			continue;
		putchar(al);

	}
	putchar('\n')


	return (0);
}
