#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 * Except 2 and 4 print other numbers
 * return: void
 */

void print_most_numbers(void)
{
	char x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
		    _putchar(x + '0');
		}
	}
	_putchar('\n');
}
