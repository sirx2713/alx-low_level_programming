#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)

				_putchar(' ');

			_putchar('\\');

			if (length == n -1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
