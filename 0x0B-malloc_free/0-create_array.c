#include<stdio.h>
#include <stdlib.h>
/**
 * create_array - craeting an array of characters.
 * @size: check the size of character
 * @c: character with which each element of the array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (unsigned int i = 0; i < size; ++i)
{
array[i] = c;
}
}
return (array);
}
