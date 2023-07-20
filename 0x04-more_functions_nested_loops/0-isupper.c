#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
