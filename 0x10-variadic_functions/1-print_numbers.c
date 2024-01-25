#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: division
 * @n: variadic
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
char *sep;
unsigned int a;
va_list list;
if (separator == NULL || *separator == 0)
sep = "";
else
sep = (char *) separator;
va_start(list, n);
if (n > 0)
printf("%d", va_arg(list, int));
for (a = 1; a < n; a++)
printf("%s%d", sep, va_arg(list, int));
printf("\n");
va_end(list);
}
