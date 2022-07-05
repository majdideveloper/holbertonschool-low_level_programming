#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *sum_them_all - FUN return sum all argument
 *@n: const unsigned int
 *Return : sum int
 *
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


