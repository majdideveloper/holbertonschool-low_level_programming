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

	unsigned int bin,dec = 0;
	int i, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++){
		if (*b != '0' && *b != '1'   )
			return (0);	
	}
	bin = atoi(b);
	for (i = 0;bin;i++, bin /= 10)
	{
		if(bin % 10)
			dec += pow(2, i);
	}
	return (dec);
}
