#include "lists.h"

/**
 * free_listint_safe - It frees up the linked list
 *
 * @h: It points to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
size_t leng = 0;
int diffs;
listint_t *temp;
if (!h || !*h)
return (0);
while (*h)
{
diffs = *h - (*h)->next;
if (diffs > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
leng++;
}
else
{
free(*h);
*h = NULL;
leng++;
break;
}
}
*h = NULL;
return (leng);

}
