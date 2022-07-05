#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_char - FUN 
 *@arg: va_list
 *Return: Nothing
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 *print_int - FUN 
 *@arg: va_list
 *Return: Nothing
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}
/**
 *print_float - FUN 
 *@arg: va_list
 *Return: Nothing
 */
void print_float(va_list arg)
{
	float c;

	c = va_arg(arg, double);
	printf("%f", c);
}
/**
 *print_string - FUN 
 *@arg: va_list
 *Return: Nothing
 */
void print_string(va_list arg)
{
	char *str;


	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 *print_all - FUN return sum all argument
 *@format: const unsigned int
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *sep;
	format_t s[] = {

		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	i = 0;
	sep = "";

	va_start(args, format);
	while(format != NULL && format[i])
	{
		j = 0;
		while(j < 4 && format[i] != *(s[j].op))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			s[j].ptr(args);
			sep = ", ";
		}
		i++;
	}
	







	printf("\n");
	va_end(args);                  /* Clean up. */
}
