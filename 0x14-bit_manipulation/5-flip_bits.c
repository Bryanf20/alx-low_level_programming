#include <stdio.h>
#include "main.h"

/**
* flip_bits - a function that returns the number of
* bits you would need to flip to get from
* one number to another
* @n: first number
* @m: second number
*
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_bit, mid;

	mid = n ^ m;
	n_bit = 0;
  
	for (n_bit = 0; mid != 0; n_bit += 1)
		mid &= (mid - 1);
	return (n_bit);
}
