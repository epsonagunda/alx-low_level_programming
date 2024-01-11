#include "main.h"
/**
 * _pow_recursion - function to return a power of a given no
 * @x: number
 * @y: power raised
 * Return: 0 (pas)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
