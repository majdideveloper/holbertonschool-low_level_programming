#include "main.h"

/**
 *print_last_digit - Function return abs last digit
 *@number: the number to verfiy
 *Return: 0
 *
 */
int print_last_digit(int number)
{
		number = number % 10;
		_putchar(number + '0');
		return (number);
}
