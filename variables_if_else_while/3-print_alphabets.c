#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}

	for (a = 'A'; a <= 'Z'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);

}
