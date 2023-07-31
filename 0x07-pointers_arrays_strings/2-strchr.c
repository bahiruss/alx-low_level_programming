#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}
