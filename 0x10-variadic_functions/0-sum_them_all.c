#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n:vardic
 * Return: 0(pass)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int a, sum = 0;
if (n == 0)
return (0);
va_start(valist, n);
for (a = 0; a < n; a++)
{
sum += va_arg(valist, const unsigned int);
}
va_end(valist);
return (sum);
}
