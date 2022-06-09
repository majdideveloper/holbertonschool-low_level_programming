#include "main.h"

/**
 *_abs - Function return abs number
 *@number: the number to verfiy
 *Return: 1 if lowercase
 *
 */
int _abs(int number)
{
	if (number > 0)
	{
		return (number);
	}
	else if (number < 0)
	{
		number = number * (-1);
		return (number);
	}
	else
	{
		return (0);
	}
}
