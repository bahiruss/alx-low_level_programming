#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list
 *
 * @head: points to the first node in the list
 *
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neww;
neww = malloc(sizeof(listint_t));
if (!neww)
return (NULL);

neww->n = n;
neww->next = *head;
*head = neww;
return (neww);
}
