#include <stdio.h>

/*
 * main- Entry point
 *
 * Description - prints all alphabets
 *
 * from a-z
 *
 * return (0) success
 *
 */

int main(void)
{
	char ch = 'a';

	if (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	
	return (0);
}
