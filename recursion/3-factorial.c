#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *factorial - Function return factorial of n number
 *@n: int number
 *Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}



