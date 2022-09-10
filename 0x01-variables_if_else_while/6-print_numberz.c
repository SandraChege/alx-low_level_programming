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

	while (num <= 9)
	{
		putchar("%1", num);
		num++;
	}
	
	putchar("\n");

	return (0);
}
