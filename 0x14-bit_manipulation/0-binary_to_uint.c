#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i;
	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)

	{
		if (b[i] == '0')

			convert <<= 1;

		else if (b[i] == '1')

			convert = (convert << 1) | 1;

		else

			return (0);
	}

	return (convert);
}
