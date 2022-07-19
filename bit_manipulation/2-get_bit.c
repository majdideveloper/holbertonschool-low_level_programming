#include "main.h"
/**
 * print_binary - function that prints the binary reprisentation of a number
 * @n: the number to print
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
return (n >> index) & 0x01;
}

