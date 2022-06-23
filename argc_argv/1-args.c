#include <stdio.h>
/**
 * main - the main function
 *@argc : number of arg
 *@argv : list of String arg
 *Return: int value
 */
int main(int argc, char *argv[])
{
	argc += 0;
	int count = 0;

	while (argv[count] != NULL)
	{
		++count;
	}
	printf("%d\n", (argc - 1));
	return (0);
}
