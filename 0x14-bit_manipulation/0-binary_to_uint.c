#include "main.h"

/**
* binary_to_uint - a function that converts a
* binary number to an unsigned int
*
* @b: pointing to a string of 0 and 1 chars
* Return: the converted number or 0
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	num = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] & 1)
			num += 1;
		i += 1;
	}
	return (num);
}
