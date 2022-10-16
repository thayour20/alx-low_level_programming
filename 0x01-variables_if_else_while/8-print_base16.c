#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing number to base sixteen
 * Return: always 0
 */

int main(void)
{

	int x;
	char hex_val[] = "0123456789abcdef";

	for (x = 0; x < 16; x++)
	{
		putchar(hex_val[x]);
	}
		putchar('\n');


	return (0);
}
