#include "main.h"

/**
 *print_line - Function Display numbers from 0 - 9
 *@n: integer
 */
void print_line(int n)
{
int i;
if (n > 0)
{
	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
else if (n == 0)
{
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
