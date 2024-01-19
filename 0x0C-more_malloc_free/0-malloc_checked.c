#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: allocated memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *z;
z = malloc(b);
if (z == NULL)
exit(98);
return (z);
}
