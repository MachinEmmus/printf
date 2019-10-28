#include "holberton.h"

/**
 * only_char - Print uniq char
 * @list: list to arguments
 * Return: 1 always
 */

int only_char(va_list list)
{
int ch = va_arg(list, int);
	return (_putchar(ch));
}
