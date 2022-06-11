#include "main.h"

/**
 *print_triangle - Function
 *@size: integer
 */
void print_triangle(int size)
{
int i, j, q;
if (size > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
		_putchar(' ');
		}
		for (q = 1; q <= i; q++)
		{
		_putchar('*');
		}
		_putchar('\n');
}
}
else if (size <= 0)
{
	_putchar('\n');
}
}
