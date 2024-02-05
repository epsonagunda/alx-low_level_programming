#include <stdio.h>
#include "lists.h"
/**
 *listint_len - function that returns the number of elements
 *in a linked listint_t
 *@h: pointer to const listint
 *Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
size_t node = 0;
while (h != NULL)
{
h = h->next;
node++;
}
return (node);
}
