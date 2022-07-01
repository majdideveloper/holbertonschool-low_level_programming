#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - Fun
 *@name: pointer to char name
 *@f: function
 *Return: 0
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (!f)
		return;
	f(name);  
}
