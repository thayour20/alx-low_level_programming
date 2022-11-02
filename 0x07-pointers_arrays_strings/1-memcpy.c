#include "main.h"

/**
 * _memcpy - to copy memory
 * @src: memory are to copy
 * @dest: memoty yo be copied to
 * @n: integer n
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = r;

	for (; r < i; r++)
	{
		dest[r] = str[r];
		n--;
	}
	return (dest);
}
