#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed in binary format
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int started = 0;

	while (mask)
	{
	if (n & mask)
	{
		started = 1;
		putchar('1');
	}
	else if (started)
	{
		putchar('0');
	}
	mask >>= 1;
	}

	if (!started)
	{
	putchar('0');
	}
}
