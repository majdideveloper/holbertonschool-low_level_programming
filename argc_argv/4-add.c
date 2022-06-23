#include <stdio.h>
#include <stdlib.h>
/**
 * validateInt - function validate int
 *@B : pointer of char
 *Return: int value
 */


int validateInt(char *B)
{
	int i;

	for (i = 0; B[i] != 0; i++)
	{
		if (!(B[i] >= 48 && B[i] <= 57))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - the main function
 *@argc : number of arg
 *@argv : list of String arg
 *Return: int value
 */
int main(int argc, char *argv[])
{
	int i, validate, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc ; i++)
		{
			validate = validateInt(argv[i]);
			if (validate == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

