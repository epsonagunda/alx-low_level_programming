#include "lists.h"
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: A pointer to the listint_t list.
 * @str: needs to be duplicated
 *
 * Return: the address of the new elemenet.
 */
list_t *add_node(list_t **head, const char *str)
{
if (head == NULL)
{
return (NULL);
}
list_node_t *new_node = (list_node_t *)malloc(sizeof(list_node_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL) 
{
free(new_node);
return (NULL);
}
new_node->next = *head;
*head = new_node;
return (*head);
}
