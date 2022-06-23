#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 *@argc : number of arg
 *@argv : list of String arg
 *Return: int value
 */
int main(int argc, char *argv[])
{
	int coin, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		coin = 0;
		cents = atoi(argv[1]);
		while (cents >= 25)
		{
			cents -= 25;
			++coin;
		}
		while (cents >= 10)
		{
			cents -= 10;
			++coin;
		}
		while (cents >= 5)
		{
			cents -= 5;
			++coin;
		}
		while (cents >= 2)
		{
			cents -= 2;
			++coin;
		}
		if (cents == 1)
			++coin;
		printf("%d\n", coin);
	}

	return (0);
}

