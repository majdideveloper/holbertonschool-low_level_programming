#include "main.h"

/**
 *swap_int - Function
 *@a: a pointer the integer
 *@b: a pointer the integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
