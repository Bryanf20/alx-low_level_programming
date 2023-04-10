#include "main.h"

/**
* flip_bits - a function that returns the number of
* bits you would need to flip to get from
* one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int chk = 1;
	unsigned long int mid;
	unsigned int n_bit = 0;
	unsigned int i;

	mid = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (mid & chk))
			n_bit++;
		chk <<= 1;
	}
	return (n_bit);
}
