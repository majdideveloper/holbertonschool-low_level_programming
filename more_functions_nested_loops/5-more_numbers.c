#include "main.h"

/**
 *more_numbers - Function Display numbers from 0 - 9
 */
void more_numbers(void)
{
int i;
int j;


for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
	_putchar(j + '0');
		if (j > 9)
		{
			_putchar('1');
		}
	}
_putchar('\n');
}
}
