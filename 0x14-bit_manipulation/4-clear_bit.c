#include <stdio.h>
#include "main.h"
/**
* clear_bit -  function that sets the value of a bit to 0 at a given index.
*@index:  is the index, starting from 0 of the bit you want to set.
*@n: pointer to unsigned long int
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
if (*n & m)
*n ^= m;
return (1);
}
