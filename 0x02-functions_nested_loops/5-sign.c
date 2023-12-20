#include "main.h"

/**
 * print_sign - display the sign of a number
 * @n: number to be display
 * Return: 1 for positive num, -1 for negative num or zero for anything else
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

