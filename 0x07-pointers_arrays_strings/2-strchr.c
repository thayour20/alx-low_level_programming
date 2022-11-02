#include "main.h"

/**
 * _strchr - function to locate a character in  string
 * @s: string to be searched
 * @c: chracter to locate
 * Return: alwys 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] <= '0\'; i++)
	{
		if (s[i] == c)

			return (&s[i]);
	}
	retun (0);
}
