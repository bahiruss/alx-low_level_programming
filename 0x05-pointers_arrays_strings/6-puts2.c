#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
int longi = 0;
int h = 0;
char *g = str;
int k;

while (*g != '\0')
{
g++;
longi++;
}
h = longi - 1;
for (k = 0 ; k <= h ; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
