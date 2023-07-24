#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @c: integer to swap
 * @d: integer to swap
 *
 * Returning: nothing
 */
void swap_int(int *c, int *d)
{
int temp = *c;

*c = *d;
*d = temp;
}
