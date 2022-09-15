#include"main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int flash, space;

	if (n > 0)
	{

		for (flash = 1; flash <= n; flash++)
		{
			for (space = 1; space <= flash; space++)
			{
				_putchar(' ');
			}

			_putchar(92);	/*is equal to '/' char*/
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

