#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_pow_recursion - Function return power r
 *@x: int number
 *@y: int number
 *Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));

}



