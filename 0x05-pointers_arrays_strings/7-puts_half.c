#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)

{
int k = 0;
int l;

while (str[k] != '\0')
{
k++;
}
if (k % 2 == 1)
{
l = (k - 1) / 2;
l += 1;
}
else
{
l = k / 2;
}
for (; l < k; l++)
{
_putchar(str[l]);
}
_putchar('\n');
}
