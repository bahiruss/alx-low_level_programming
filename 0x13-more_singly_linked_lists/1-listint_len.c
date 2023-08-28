#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked lists
 *
 * @h: linked list which is type of listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t Y = 0;

while (h)
{
Y++;
h = h->next;
}
return (Y);
}
