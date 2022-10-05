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
	printf("%d\n", argc - 1);
	return (0);
}	
