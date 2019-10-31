#include "holberton.h"
/**
 * print_uns - print a unsigned int
 * @list: argument list
 * return: nothing
 */
int print_uns(va_list list)
{
	return (print_unint(va_arg(list, unsigned int)));
}
