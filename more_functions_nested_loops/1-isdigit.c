#include "main.h"

/**
 *_isdigit - Function return 0 or 1 check upper or lower
 *@c: the number
 *Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

