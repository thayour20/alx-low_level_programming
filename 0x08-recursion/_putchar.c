#include <stdio.h>
#include "main.h"

/**
 * _putchar - write char .c to stdout
 * Return: on success 1
 * @c: the char to print
 */

int _putchar(char c)

	return (write(1, &c, 1));
