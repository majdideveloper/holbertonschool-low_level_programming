#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * binary_to_uint - print number from pointer  char 
 * @b: pointer to linked list
 *
 * Return: unsigned int 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin, dec = 0;
	unsigned int i;

	bin = atoi(b);
	for(i = 0;bin;i++, bin /= 10)
	{
		if (bin % 10)
			dec += pow(2, i);
	}

	return (dec);
}
