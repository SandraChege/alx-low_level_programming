#include <stdio.h>
#include <unistd.h>

/**
 * main - This is the main function
 * Description- Prints a quote from Dora Korpar.
 *
 * Return: (1) An error occurs
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, q, sizeof(q));

	return (1);
}
