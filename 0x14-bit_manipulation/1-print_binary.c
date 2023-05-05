#include "main.h"
#include "stdio.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: prenset the number binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = 0;

	while ((mask << 1) <= n)
	{
		mask <<= 1;
		bit_count++;
	}

	while (mask > 0)
	{
		if (n & mask)
			putchar('1');
	else
			putchar('0');

	mask >>= 1;
	}
}
