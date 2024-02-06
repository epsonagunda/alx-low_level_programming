#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -  function that returns the nth node of a listint_t
 * @head: A pointer to the head of the listint_t list.
 * @index: is the index of the node, starting at 0
 * Return: NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
