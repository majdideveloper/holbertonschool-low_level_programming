#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - FUN return sum all argument
 *@separator: const unsigned int
 *@n: const unsigned int
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;


	va_start(ap, n);         /* Initialize the argument list. */




	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator != NULL) && (i != (n - 1)))

			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);                  /* Clean up. */
}


