#include "main.h"

/**
 *_isupper - Function return 0 or 1 check upper or lower
 *@c: the number
 *Return: 0 or 1
 */
int _isupper(int c)
{
	if (c > 101 && c < 132)
		return (0);
	else
		return (1);

}

