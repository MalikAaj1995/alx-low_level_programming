#include "main.h"
#include "stdio.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: prenset the number binary
 *
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;

	int i;

	int bit;

	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			break;
		}
	}
	for (; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		putchar(bit ? '1' : '0');
	}
	putchar('\n');
}
