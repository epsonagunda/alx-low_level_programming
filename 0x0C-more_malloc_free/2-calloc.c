#include "main.h"
/**
 * _calloc - function that allcates memory for an array.
 * @nmemb: allocates memory for an array
 * @size: size of memory allocated
 * Return: returns a pointer to the allocted memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *k;
unsigned int l;
if (nmemb == 0 || size == 0)
return (NULL);
k = malloc(nmemb * size);
if (k == NULL)
return (NULL);
for (l = 0; l < (nmemb * size); l++)
k[l] = 0;
return (k);
}
