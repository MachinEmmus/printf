#include "holberton.h"
/**
 * _printf - Is my Function :)
 * @format: character strings, 0 or more
 * Return: size of String input
 */
int _printf(const char *format, ...)
{
const char percent = '%';
va_list Ourlist;
unsigned int i = 0, Count = 0, k = 0;
	kind Flags[] = {
			{'c', only_char    },
			{'s', print_string },
			{'%', only_percent }
	};
	va_start(Ourlist, format);
	while (format && format[i])
	{
		if (format[i] == percent && format[i + 1] == percent)
		{
			_putchar(percent);
			Count += 1, i += 2;
		}
		else
		{
			if (format[i] == percent && format[i + 1] != percent)
			{
				while (k < 3)
				{
					if (format[i + 1] == Flags[k].modifier)
					{
						Count += Flags[k].f(Ourlist);
						i += 2;
						break;
					} k++;
				}
			}
		}
		_putchar(format[i]);
		Count++, i++;
	}
	va_end(Ourlist);
	return (Count);
}
