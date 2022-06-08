#include <unistd.h>
#include "main.h"
/**
 *print_alphabet - Function write alphabet
 *
 *Return: Nothing
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
