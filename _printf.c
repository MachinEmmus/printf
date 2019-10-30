#include "holberton.h"
/**
 * _printf - Is my Function :)
 * @format: character strings, 0 or more
 * Return: size of String input
 */
int _printf(const char *format, ...)
{
va_list ourlist;
unsigned int i  = 0, count, vol = 0;
	kind flags[] = {
			{'c', only_char    },
			{'s', print_string },
			{'d', c_decimal    }
	};
	if  (format == NULL)
		return (-1);
	va_start(ourlist, format);
	if (i == 0 && format[i + 1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (vol = 0; flags[vol].modifier != '\0'; vol++)
			{
				if (flags[vol].modifier == format[i + 1])
				{
					count += flags[vol].f(ourlist);
					i++;
					break;
				}
			}
			if (flags[vol].modifier == '\0')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(ourlist);
	return (count);
}
