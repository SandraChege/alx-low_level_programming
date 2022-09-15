#include "main.h"
#include <stdio.h>

/**
 * _isdigit - this is a function
 * Description - Checks for a digit
 * @c: function argument used
 *
 * Return: (1) if digit and (0) otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
