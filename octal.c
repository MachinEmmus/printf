#include "holberton.h"
/**
 * print_oct - print octal
 * @list: argument list
 * Return: nothing
 */
int print_oct(va_list list)
{
	unsigned int n = (va_arg(list, unsigned int));
	unsigned int mod;
	unsigned int octal = 0, x = 1;

	while (n != 0)
	{
		mod = n % 8;
		n = n / 8;
		octal = octal + (mod * x);
		x = x * 10;
	}
	return (print_unint(octal));
}
