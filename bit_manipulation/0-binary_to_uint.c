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

	unsigned int bin,dec = 0, base = 1, rem;  
	int i, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++){
	    if (b[i] != '0' && b[i] != '1'   )
			return (0);
	}
	bin = atoi(b);
	 while ( bin > 0)  
    {  
        rem = bin % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
        dec = dec + rem * base;  
        bin= bin / 10; // divide the number with quotient  
        base = base * 2;  
    }  
	
	
	return (dec);
}
