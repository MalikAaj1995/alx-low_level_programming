#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int
 * Return : None
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("%lu", n % 2);
		return;
	}
	print_binary(n / 2);
        printf("%lu", n % 2);
}
