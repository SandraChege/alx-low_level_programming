#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    int s;
    unsigned int atomic = 0;

    if (!b)
    {
        return (0);
    }

    for (s = 0; b[s]; s++)
    {
        if (b[s] < '0' || b[s] > '1')
            return (0);
        atomic = 2 * atomic + (b[s] - '0');
    }

    return (atomic);
}
