#include "lists.h"

/**
 * sum_listint - It calculates the sum of all the data in a listint_t list
 *
 * @head: The first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
int A = 0;
listint_t *temp = head;

while (temp)
{
A += temp->n;
temp = temp->next;
}
return (A);
}
