#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always (0) success
*/

void print_alphabet_x10(void)
{
	int ing, ch;

	for (num = 1; num <= 10; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}

