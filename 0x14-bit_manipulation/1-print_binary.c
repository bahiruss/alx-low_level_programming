#include "main.h"

/**
 * print_binary - Which prints the binary equivalent of a decimal number
 *
 * @n: Its a number to print in binary
 */

void print_binary(unsigned long int n)
{
int w, counts = 0;
unsigned long int current;

for (w = 63; w >= 0; w--)
{
current = n >> w;

if (current & 1)
{
_putchar('1');
counts++;
}
else if (counts)
_putchar('0');
}
if (!counts)
_putchar('0');
}
