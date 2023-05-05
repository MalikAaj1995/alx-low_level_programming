#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;

	for (int i  = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result = (result << 1) + (b[i] - '0');
		else
		{
		return (0);
		}
	}
	return (result);
}
