#include "holberton.h"
#include <stdarg.h>
/**
 * print_decimal - take number argument and print a number
 * @list: argument list
 * Return: nothig
 */
int print_decimal(va_list list)
{
	return (print_int(va_arg(list, int)));
}
