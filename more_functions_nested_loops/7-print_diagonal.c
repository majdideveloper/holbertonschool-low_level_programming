#include "main.h"

/**
 *print_diagonal - Function
 *@n: integer
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
	for (i = 0; i >= n; i++)
	{
		for (j = 1; j > n; j++)
		{
		_putchar(' ');
		if (j == n)
		{
			_putchar('\\');
		}

		}
	}
	_putchar('\n');
}
else if (n <= 0)
{
	_putchar('\n');
}
}
