#include <stdio.h>

/**
 * main - this is the main function
 * Description- prints single digits number of base 10 starting with 0
 *
 * Return: Always (0) success
*/

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	
	putchar('\n');

	return (0);
}