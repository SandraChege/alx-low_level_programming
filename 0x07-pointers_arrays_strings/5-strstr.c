#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string is searchedd
 * @needle: the substring is located
 *
 * Return: if the substring is located - pointer to begin at located substring
 * 	   if the substirng is not found - null
*/

char *_strstr(char *haystack, char *needle)
{
	int yk;

	if (*needle == 0)
	{
		return (s);
	}
	while (*s)
	{
		yk = 0;

		if (s[index] == needle[index])
		{
			do 
			{
				if (needle[index] + 1 == '\0')
				{
					return (s);
				}
				yk++;
			}
			while (s[index] == needle[index]);
		}
		s++;
	}
	return ('\0');
}
