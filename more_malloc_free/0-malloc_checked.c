
#include <stdlib.h>
#include <string.h>
/**
 *malloc_checked - fun list args
 *@b : unsigned int
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p =  malloc(b);
	if (p == NULL)
		p = 98;
return(p);	
}

