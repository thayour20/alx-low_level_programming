#include "main.h"

/**
 * _memset - to fill a block of memory with a sperial value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: alwys 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
