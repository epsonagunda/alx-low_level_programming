#include "main.h"
/**
 *_strspn - count all posible substring of a given string
 * @s: targeted segment
 * @accept: accepted byte
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
bytes++;
break;
}
else if ((accept[i + 1]) == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
