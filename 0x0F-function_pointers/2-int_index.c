#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - returns the index of the first element
 * @array: array
 * @size: the number of elements in the array
 * @cmp: s a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL)
return (-1);
if (size <= 0)
return (-1);
if (cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
