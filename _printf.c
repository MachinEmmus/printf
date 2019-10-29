#include "holberton.h"
/**
 * _printf - Is my Function :)
 * @format: character strings, 0 or more
 * Return: size of String input
 */
int _printf(const char *format, ...)
{
va_list ourlist;
unsigned int i = 0, count = 0, k = 0, vol = 0;
	kind flags[] = {
			{'c', only_char    },
			{'s', print_string },
			{'d', c_decimal    }
	};
	va_start(ourlist, format);
	while (format && format[i])
	{
		vol = 0;
		if (format[i] == '%' && format[i + 1] != '%')
		{
			while (k < 3)
			{
				while (format[i + 1] == ' ')
					i++, vol = 1;
			if (format[i + 1] == flags[k].modifier)
			{
				count += flags[k].f(ourlist), i += 2;
			}
			else if (format[i + 1] == '\0')
				return (-1);
			k++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%'), count++, i += 2, vol = 1;
		}
		if (format[i] && vol == 0)
			_putchar(format[i]), count++, i++;
	}
	va_end(ourlist);
	return (count);
}
