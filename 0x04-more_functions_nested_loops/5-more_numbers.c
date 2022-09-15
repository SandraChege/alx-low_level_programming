#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 0 to 14 ten times
 *
 * Return: always (0) success
*/

void more_numbers(void)
{
	int num, san, count;

	for (count = 0; count <= 14; count++)
	{
		for (num = 0; num <= 10; num++)
		{
			san = count;

			if (num > 9)
			{
				_putchar('1');
				san = num % 10;
			}
			_putchar(san + 48);
		}
		_putchar('\n');
	}
}
