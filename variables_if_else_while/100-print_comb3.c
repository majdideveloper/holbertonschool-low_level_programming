#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 1;
	while (a != 9 )
	{

		putchar(a + '0');
		putchar(b + '0');
		if (a != 8 || b !=9)
		{
			putchar(',');
			putchar(' ');
		}
		if ( b == 9)
		{
			++a;
			b = b -(b- a);
		}


		b++;
	}

	putchar('\n');
	return (0);

}
