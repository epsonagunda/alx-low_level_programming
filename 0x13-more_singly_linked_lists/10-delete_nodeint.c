#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -  function that deletes the node
 * at index index of a listint_t
 * @head: A pointer to the address.
 * @index: is the index of the node
 *that should be deleted.
 * Return: 1 if it succeeded,
 * -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;
if (copy == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);
copy = copy->next;
}
tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
