#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements
 * @h: a pointer to our const list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t nodes = 0;
while (current != NULL)
{
printf("[%d]%s\n", current->len, (current->str != NULL) ? current->str : "(nil)");
current = current->next;
nodes++;
}
return (nodes);
}
