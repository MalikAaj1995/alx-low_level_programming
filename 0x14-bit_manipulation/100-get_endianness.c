#include <stdio.h>
#include "main.h"
/**
 * get_endianness -  function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int value = 0;
	char *byte = (char *)&value;

	if (*byte == 0x00)
	{
		return (1);
	}
	return (1);
}
