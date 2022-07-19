#include "main.h"
/**
 * clear_bit - function that clear the bit of index
 * @n: the number
 * @index: index of bit
 * Return: void
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}

