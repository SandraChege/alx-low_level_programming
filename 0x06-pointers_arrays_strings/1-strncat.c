#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int search = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (search < n)
	{
		*(dest + count) = *(src + search);
		if (*(src + count2) == '\0')
		{
			break;
		}
		count++;
		search++;
	}
	return (dest);
}
