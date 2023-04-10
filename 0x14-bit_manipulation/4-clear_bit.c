#include "main.h"

/**
* clear_bit - a function that sets the value of a bit
* to 0 at a given index
* @n: a pointer that point to a number
* @index: is the index, starting from 0 of the bit
* you want to set
*
* Return: 1 if it worked, or -1 if an error occurred
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s_val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s_val = ~(1 << index);
	*n = *n & s_val;
	return (1);
}
