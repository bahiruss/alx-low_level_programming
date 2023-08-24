#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: double pointer to the list_t list
 *
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *neww;
list_t *temp = *head;
unsigned int leng = 0;

while (str[leng])
leng++;

neww = malloc(sizeof(list_t));
if (!neww)
return (NULL);

neww->str = strdup(str);
neww->len = leng;
neww->next = NULL;

if (*head == NULL)
{
*head = neww;
return (neww);
}

while (temp->next)
temp = temp->next;

temp->next = neww;

return (neww);
}
