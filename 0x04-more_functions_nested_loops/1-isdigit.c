#include "main.h"

int _isdigit(int x)
{
	if (x >= 40 && x <= 57)
	{
		return (1);
	}
		return (0);
}

/**
 * _isdigit - check if numbers are 0 - 9
 * @x: char to be checked
 *
 * Return: 0 or 1
 */
