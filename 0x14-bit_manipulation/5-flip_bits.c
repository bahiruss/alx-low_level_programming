#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *
 * @n: The first number
 *
 * @m: The second number
 *
 * Return: It is a number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int e, counts = 0;
unsigned long int Tcurrent;
unsigned long int exclusive = n ^ m;
for (e = 63; e >= 0; e--)
{
Tcurrent = exclusive >> e;
if (Tcurrent & 1)
counts++;
}
return (counts);

}
