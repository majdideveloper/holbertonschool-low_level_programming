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
	int i;

for (i = 1; i < 10; i++)
{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

	}
}
