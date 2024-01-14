#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: strin to print
 */
void _puts(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
}
