#include <stdio.h>
#include "main.h"
/**
* flip_bits -  function that returns the number of bits.
* you would need to flip to get from one number to another.
*@m: unsigned long int.
*@n: unsigned long int
*Return: 1 if it worked,
*or -1 if an error occurred
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int mask = 0, index;
index = n ^ m;
while (index > 0)
{
if (index & 1)
{
mask++;
}
index >>= 1;
}
return (mask);
}
