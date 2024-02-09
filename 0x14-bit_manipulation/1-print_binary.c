#include <stdio.h>
#include "main.h"
/**
* print_binary - function that prints a binary
* representation of a number.
* @n: unsigned int
*/
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
if (n & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
