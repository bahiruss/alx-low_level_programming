#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 * Except 2 and 4 print other numbers
 * return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
