#include "lists.h"

/**
 * find_listint_loop - It finds the loop in a linked list
 *
 * @head: The linked list to search for
 *
 * Return: The address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *balls = head;
listint_t *apples = head;
if (!head)
return (NULL);

while (balls && apples && apples->next)
{
apples = apples->next->next;
balls = balls->next;
if (apples == balls)
{
balls = head;
while (balls != apples)
{
balls = balls->next;
apples = apples->next;
}
return (apples);
}
}
return (NULL);

}
