#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 * @s: string
 * Return: 0 (pass)
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
