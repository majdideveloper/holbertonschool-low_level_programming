#include "main.h"

/**
 *more_numbers - Function Display numbers from 0 - 9
 */
void more_numbers(void)
{
int i;
int j;
int count;


for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
		if (j > 9)
		{
			_putchar('1');
		}
		count = j;
		if (j > 9)
		{
			count = j - 10;
		}
		_putchar(count + '0');
	}
_putchar('\n');
}
}
