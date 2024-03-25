#include "main.h"
/**
 * _memcpy - function used to copy a data from src addr to dest addr
 * @dest: destination address
 * @src: source address
 * @n: Number of bytes to copy
 * Return: a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *csrc =  (char *)src;
char *cdest = (char *)dest;
unsigned int i = 0;
for (; i < n; i++)
cdest[i] = csrc[i];
return (dest);
}
