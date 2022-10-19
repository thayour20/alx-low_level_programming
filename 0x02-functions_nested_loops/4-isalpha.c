#include "main.h"

/**
 * _isalpha - to check if c is an alphabet
 * Return: 1 if alpha and 0 otherwise
 * @c: ti check for alpha
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
