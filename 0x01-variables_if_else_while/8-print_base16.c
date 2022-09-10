#include <stdio.h>

/**
 * main - This is the main function
 * Description - Prints all base 16 numbers i.e., 0 to 15
 *
 * Return: always (0) success
*/

int main()
{
	int num;

	for (num=0; num <=10; num++)
	{
		putchar(num + '0');
	}
	
	char ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
