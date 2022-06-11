#include <stdio.h>
#include "main.h"

/**
 *fizz_buzz - Function
 */
void fizz_buzz(void)
{
int i;

for (i = 1; i < 101; i++)
{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
		printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", i);
	}


}
}