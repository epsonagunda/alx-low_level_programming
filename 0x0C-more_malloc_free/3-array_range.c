#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: minimum range of value
 * @max: maximum range of a value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *ptr;
int a, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (a = 0; min <= max; a++)
ptr [a] = min++;
return (ptr);
}
