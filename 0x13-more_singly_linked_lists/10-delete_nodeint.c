#include "lists.h"

/**
 * delete_nodeint_at_index - It deletes a node in a linked list
 *
 * @head: It points to the first element in the list
 *
 * @index: The index of the node to delete
 *
 * Return: 1 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int S = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (1 - index > S)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
S++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
