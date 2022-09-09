#include <stdio.h>

/*
 * main - Entry point
 *
 * Description -Prints the alphabet in lowercase
 *
 * then uppercase
 *
 * return (0)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while(CH <= 'A')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	
	return (0);
