#include "main.h"

/**
 *_isalpha - Function check number
 *@c: the number to verfiy
 *Return: 1 if lowercase
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
