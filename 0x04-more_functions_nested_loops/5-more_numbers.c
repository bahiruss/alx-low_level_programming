#include "main.h"

/** this a nested loop function that prints more number
 *
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar ((b % 10) + '0');
		}
		_putchar('\n');
	}
}
