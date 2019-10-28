#include "holberton.h"

/**
 * print_string - print %s strings
 * @list: my string
 * Return: 1 always
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
