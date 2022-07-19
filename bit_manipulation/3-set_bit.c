#include "main.h"
/**
 * get_bit - function that prints the bit of index
 * @n: the number
 * @index: index of bit
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (*n);
}

