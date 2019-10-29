#include "holberton.h"

/**
 * print_string - print %s strings
 * @list: my string
 * Return: 1 always
 */

int print_string(va_list list)
{
	char *n = "(nill)";
	char *str = va_arg(list, char*);
	unsigned int count = 0, i;
		if (str == NULL)
		{
			write(1, &n, 6);
			return (6);
		}
		count = _strlen(str);
		for (i = 0; i < count; i++)
			_putchar(*(str + i));
		return (count);
}
