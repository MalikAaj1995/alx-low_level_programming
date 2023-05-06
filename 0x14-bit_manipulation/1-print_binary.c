#include "main.h"
#include "stdio.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: prenset the number binary
 *
 */

void print_binary(unsigned long int n)
{
	size_t size = sizeof(n) * 8;
	size_t i;
	unsigned long int bit;

	for (i = size - 1; i != (size_t)-1; i--)
	{
		if ((n >> i) & 1)
		{
			break;
		}
	}
	for (; i != (size_t)-1; i--)
	{
		bit = (n >> i) & 1;
		putchar(bit ? '1' : '0');
	}
}
