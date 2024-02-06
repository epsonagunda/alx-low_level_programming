#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  function that deletes the head node
 * @head: A pointer to the address.
 * Return: 0(empty link).
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;
if (*head == NULL)
return (0);
tmp = *head;
ret = (*head)->n;
*head = (*head)->next;
free(tmp);
return (ret);
}
