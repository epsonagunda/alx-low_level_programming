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
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] =  c;
return(str);
}
