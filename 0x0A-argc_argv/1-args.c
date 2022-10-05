#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: number of arguments passed
 * @argv: array pointer that holds arguments passed
 *
 * Return: Always (0) Success
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	
	return (0);
}	
