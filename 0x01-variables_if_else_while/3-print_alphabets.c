#include <stdio.h>

/*
 * main-Prints the alphabet in lowercase then uppercase
 * return (0) success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	char cp = 'A';

	while (cp <= 'Z')
	{
		putchar(cp);
		cp++;
	}
	putchar('\n');
	return (0);
