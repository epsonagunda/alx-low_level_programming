#include "main.h"
/**
 * _strpbrk - search a string of any set byte
 * @s: string to search
 * @accept: the byte to search for
 * Return: a pointer to the byte in s that matches one of the bytes
 * @accept,or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
