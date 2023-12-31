#include "main.h"

/**
 * clear_bit - It is a set of value for the given bit to 0
 *
 * @n: It points to the number to change
 *
 * @index: It is an index of the bit to clear
 *
 * Return: 1 for success.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);

}
