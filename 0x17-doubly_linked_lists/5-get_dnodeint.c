#include "lists.h"
/**
 * get_dnodeint_at_index -a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to dlistint.
 * @index: is the index of the node,
 * starting from 0
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node = head;
unsigned int cont = 0;
while (node && cont != index)
{
cont++;
node = node->next;
}
if (node && cont == index)
return (node);
return (NULL);
}
