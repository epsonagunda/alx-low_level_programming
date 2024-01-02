#include "main.h"
/**
 * void swap_int - swaps the values of two integers.
 * @a - value of the first integer
 * @b - value of the second integer
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
