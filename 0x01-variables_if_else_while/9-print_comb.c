#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing all possible combination of a single digit number
 * Return: always 0
 */

int main(void)

{

	int b;

	for (b = '0'; b <= '9'; b++)

	{
		putchar(b);
		if (b == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);

}
