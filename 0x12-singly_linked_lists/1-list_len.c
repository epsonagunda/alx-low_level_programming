#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of element
 *               in a linked listint_t list.
 * @h: A pointer to the listint_t list.
 * Return: the number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
