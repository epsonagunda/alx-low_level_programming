#include "main.h"
/**
 * factorial - function that return a factorial of a given number.
 * @n: number to factor
 * Return: 0 (pass)
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
