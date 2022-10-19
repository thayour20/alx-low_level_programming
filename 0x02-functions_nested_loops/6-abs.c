#include "main.h"

/**
 * _abs - absolute number
 * @t: to get absolute
 * Return: absolute number
 */

int _abs(int t);
{
	int absvalue;

	if (t < 0)
	{
		t = t * (-1);
	}
	absvalue = t;
	return (absvalue);

}
