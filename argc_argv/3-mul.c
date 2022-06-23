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
	int sum = 0;

	if (argc != 3)
		printf("Error\n");
	else
	{
	sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
