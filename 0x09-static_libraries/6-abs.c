#include "main.h"
/**
 * _aba - compute the absolute value of an integer
 * @c: the numbeer to be computed.
 * Return: absolute value of a number or zero
 */
int _absolute(int c)
{
	if (c < 0)
	{
		int abs_val;
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
