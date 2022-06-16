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
int rev[n];
int i;

for (i = 0; i < n; i++)
	rev[n - 1 - i] = a[i];
for (i = 0; i < n; i++)
	a[i] = rev[i];




}
