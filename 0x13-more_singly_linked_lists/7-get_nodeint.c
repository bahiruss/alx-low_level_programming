#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 *
 * @head: The first node in the linked list
 *
 * @index: The index of the node to return
 *
 * Return: The pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int M = 0;
listint_t *temp = head;

while (temp && M < index)
{
temp = temp->next;
M++;
}
return (temp ? temp : NULL);
}
