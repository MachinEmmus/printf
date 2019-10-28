#include "holberton.h"

/**
 *
 *
 *
 */

int print_string(va_list list)
{
	char *str = va_arg(list, char*);
	unsigned int count = 0, i;	
		if (str == NULL)
			return (0);
		count = _strlen(str);
		for (i = 0; i < count; i++)
			_putchar(*(str + i));
		return (count);
}
