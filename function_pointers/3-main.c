#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - the main function
 *@argc : number of arg
 *@argv : list of String arg
 *Return: int value
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("%d\n", argc);

		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
	{	printf("Error\n");
		exit(100);

	}
	res = fun(num1, num2);
	printf("%d\n", res);
	return (0);
}
