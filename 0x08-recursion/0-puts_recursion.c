#include "main.h"
/**
 * _puts_recursion - function to print a string
 * @s: sting to be printed
 * Return:0 (pass)
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

