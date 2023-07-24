#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: the destination values
 * @src: source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int r;
for (r = 0; src[r] != '\0'; r++)
{
dest[r] = src[r];
}
dest[r++] = '\0';
return (dest);
}
