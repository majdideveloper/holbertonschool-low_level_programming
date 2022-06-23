#include <stdio.h>
/**
 * main - the main function
 *@argc : number of arg
 *@argv : list of String arg
 *Return: int value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
