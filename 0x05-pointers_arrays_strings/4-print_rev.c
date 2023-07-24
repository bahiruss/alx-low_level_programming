#include "main.h"
/**
 * print_rev - imprime en reversa
 * @y: string
 * return: 0
 */
void print_rev(char *y)

{
int longi = 0;
int x;

while (*y != '\0')
{
longi++;
y++;
}
y--;
for (x = longi; x > 0; x--)
{
_putchar(*y);
y--;
}

_putchar('\n');
}
