#include "main.h"
/**
 * puts2 - a function to  prints only one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int len, i;

len = 0;

while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
