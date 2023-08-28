#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0
 */

size_t looped_listint_len(const listint_t *head)
{
const listint_t *geni, *feni;
size_t node = 1;
if (head == NULL || head->next == NULL)
return (0);
geni = head->next;
feni = (head->next)->next;
while (feni)
{
if (geni == feni)
{
geni = head;
while (geni != feni)
{
node++;
geni = geni->next;
feni = feni->next;
}
geni = geni->next;
while (geni != feni)
{
node++;
geni = geni->next;
}
return (node);
}
geni = geni->next;
feni = (feni->next)->next;
}
return (0);

}

/**
 * print_listint_safe - It Prints the listint_t list safely.
 *
 * @head: It points to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t node, I = 0;

node = looped_listint_len(head);

if (node == 0)
{
for (; head != NULL; node++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (I = 0; node > I; I++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (node);
}

