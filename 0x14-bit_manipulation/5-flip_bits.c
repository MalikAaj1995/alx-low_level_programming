#include <stdio.h>
#include "main.h"
/**
 * flip_bits - the number of bits need to flip from one number to another
 * @n: unsigned long int number
 * @m: unsigned long int another number
 * Return: None
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped_value = n ^ m;
	unsigned int count = 0;
	while (flipped_value)
	{
		count += flipped_value & 1;
		flipped_value >>= 1;
	}
	return (count);
}
