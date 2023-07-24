#include "main.h"
/**
 * _strlen - returns the length of a string
 * @n: string
 * Return: length
 */
int _strlen(char *n)
{
int longi = 0;

while (*n != '\0')
{
longi++;
n++;
}

return (longi);
}
