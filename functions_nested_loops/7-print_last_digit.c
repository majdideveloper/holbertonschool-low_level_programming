#include "main.h"

/**
 *print_last_digit - Function return abs last digit
 *@number: the number to verfiy
 *Return: 0
 *
 */
int print_last_digit(int number)
{
		int a;

		a = number % 10;
		if (a < 0)
			a *= -1;
		_putchar(a + '0');
		return (a);
}
