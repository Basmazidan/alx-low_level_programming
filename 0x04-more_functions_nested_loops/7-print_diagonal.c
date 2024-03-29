#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int postn, space;

		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
			{
				if (postn == space)
					_putchar('\\');
				else if (space < postn)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
