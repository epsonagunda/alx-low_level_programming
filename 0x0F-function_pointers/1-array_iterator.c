#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: the size
 * @action: is a pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (array == NULL)
return;
if (action == NULL)
return;
for (a = 0; a < size; a++)
action(array[a]);
}
