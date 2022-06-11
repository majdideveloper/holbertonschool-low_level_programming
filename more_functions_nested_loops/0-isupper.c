#include "main.h"

/**
 *_isupper - Function return 0 or 1 check upper or lower
 *@c: the number
 *Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

