#include "main.h"
/**
 * flip_bits - count the number of bit are diffirent between n and m
 * @n: a positive number
 * @m: a positive number
 *
 * Return: none
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
