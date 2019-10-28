#include "holberton.h"

/**
 *
 *
 *
 */

int only_char(va_list list)
{
	int ch = va_arg(list, int);
	return (_putchar(ch));
	
}
