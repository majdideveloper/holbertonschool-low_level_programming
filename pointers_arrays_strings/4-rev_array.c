#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *reverse_array- Function
 *@a: pointer in the first item of array
 *@n: len of array
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i, aux;

for (i = 0; i < n / 2; i++)
{
	aux = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = aux;


}

}
