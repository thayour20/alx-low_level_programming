#include "main.h"

/**
* largest_number - prints the largest of 3 integers
* @a: first integer
* @b: second integer
* @c: third integer
* largest: biggest number
* Return: largest_number
*/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b < c)
	{
		largest = a;
	}
	else if (b > a && a < c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
		return (largest);
}

