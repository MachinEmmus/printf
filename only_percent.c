#include "holberton.h"

/**
 *
 *
 *
 */

int only_percent(va_list list)
{
	char s =  (char) va_arg(list, int);
	_putchar(s);
	return (1);
}

