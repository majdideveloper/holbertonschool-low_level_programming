#include "main.h"
/**
 *_islower - Function check number
 *@c: the number to verfiy
 *Return: 1 if lowercase
 *
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}