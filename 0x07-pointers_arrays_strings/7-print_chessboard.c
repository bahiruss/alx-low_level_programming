#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int w;
	int e;

	for (w = 0; w < 8; w++)
	{
		for (e = 0; e < 8; e++)
			_putchar(a[w][e]);
		_putchar('\n');
	}
}
