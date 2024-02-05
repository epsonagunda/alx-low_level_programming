#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: A pointer to the listint_t list.
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
