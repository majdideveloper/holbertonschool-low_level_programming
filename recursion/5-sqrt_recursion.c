#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * find_sqrt - finds the square root
 * @n: number to find the square
 * @root: the root to be tested
 * Return: int
 */
int find_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (find_sqrt(n, root + 1));
}

/**
 *_sqrt_recursion - Function return square
 *@n: int number
 *Return: int
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (find_sqrt(n, root));

}


