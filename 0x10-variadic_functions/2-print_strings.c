#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: division by comman
 * @n: vadiadic
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *sep, *ptr;
unsigned int b;
va_list list;
if (separator == NULL || *separator == 0)
sep = "";
else
sep = (char *) separator;
va_start(list, n);
if (n > 0)
printf("%s", va_arg(list, char *));
for (b = 1; b < n; b++)
{
ptr = va_arg(list, char*);
if (ptr == NULL)
ptr = "(nil)";
printf("%s%s", sep, ptr);
}
printf("\n");
va_end(list);
}
