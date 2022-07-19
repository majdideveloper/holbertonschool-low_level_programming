#include "main.h"
/**
 * flip_bits - function that flip 
 * @n: the number
 * @m: index of bit
 * Return: unsigned int 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a, b,count = 0;
	
for (i = 32-1;i >= 0;i--)
    {
        a = (n >> i)& 1;
        b = (m >> i)& 1;
        if (a != b)
            count++;
    }
return (count);
	
}

