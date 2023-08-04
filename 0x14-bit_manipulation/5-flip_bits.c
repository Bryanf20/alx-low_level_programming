#include "main.h"

/**
* flip_bits - a function that returns the number of
* bits you would need to flip to get from
* one number to another
* @n: first number
* @m: second number
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j;

	i = 0;
	j = n ^ m;
	for (i = 0; j != 0; i += 1)
		j &= (j - 1);
	return (i);
}
