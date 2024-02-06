#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint -  function that returns the sum of all
 * the data (n) of a listint_t
 * @head: A pointer to the head of the listint_t list.
 * Return: 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
