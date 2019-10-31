#include "holberton.h"
/**
 * print_unint - print unsigned integer
 * @n: number
 * Return: nothing
 */
int print_unint(unsigned int  n)
{
	unsigned int add, d, tmp, td, div;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		d = 0;
		tmp = n;
		while (tmp != 0)
		{
			tmp = tmp / 10;
			tmp++;
		}
		add = d;
		td = n;
		while (add > 0)
		{
			for (div = add - 1; div > 0; div--)
			{
				td = td / 10;
			}
			td = td % 10;
			_putchar(td + '0');
			td = n;
			add--;
		}
	}
	return (d);
}
