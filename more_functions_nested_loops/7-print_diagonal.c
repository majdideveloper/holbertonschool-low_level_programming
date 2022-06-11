#include "main.h"

/**
 *print_diagonal - Function
 *@n: integer
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
	for (i = 0; i >= n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
else if (n <= 0)
{
	_putchar('\n');
}
}
