#include "holberton.h"
/**
 * print_bin - turn to binary
 * @list: argument list
 * Return: nothing
 */
int print_bin(va_list list)
{
	int n = (va_arg(list, int));
	int b = 0;
	int mod;
	int x = 1;

	while (n != 0)
	{
		mod = n % 2;
		n = n / 2;
		b = b + (mod * x);
		x = x * 10;
	}
	return (print_unint(b));
}
