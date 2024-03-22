#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to dlistint.
 * Return: 0 .
 **/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
int sum = 0;
while (node)
{
sum += node->n;
node = node->next;
}
return (sum);
}
