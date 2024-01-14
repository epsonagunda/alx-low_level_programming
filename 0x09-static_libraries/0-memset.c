#include "main.h"
/**
 * _memset - is used to fill a block of memory with a particular value.
 * @s: the sting to be copied
 * @b: constant byte
 * @n: Number of bytes to copy
 * Return: 0 (pass)
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)

{
s[n - 1] = b;
n--;
}
return (s);
}

