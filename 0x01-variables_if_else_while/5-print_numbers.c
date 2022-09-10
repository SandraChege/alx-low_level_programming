#include <stdio.h>

/**
 * main - This is the main function
 * Description - Prints single digit number of base 10 starting with 0
 *
 * Return: Always (0) success
*/
int main(void)
{
	int num = 0;
	
	if(num < 10)
	{
		printf("%i", num);
		num++;
	}
	
	printf("\n");

	return (0);
}
