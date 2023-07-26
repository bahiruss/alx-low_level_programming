#include "main.h"

/**
 * leet - encode into 1337speak
 *
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
int r, t;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (r = 0; n[r] != '\0'; r++)
{
for (t = 0; t < 10; t++)
{
if (n[r] == s1[t])
{
n[r] = s2[r];
}
}
}
return (n);
}
