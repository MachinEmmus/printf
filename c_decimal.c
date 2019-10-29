#include "holberton.h"
/**
 * c_decimal - Print Decimal
 * @list: argument
 * Return: Int
 */
int c_decimal(va_list list)
{
int x = va_arg(list, int), exp = 1, count = 0, num;

	if (x < 0)
	{
		count += _putchar('-');
		num = x * -1;
	}
	else
	{
		num = x; 
	}
	while (num / exp > 9)
	{
		exp *= 10;
	}
	while (exp != 0)
	{
		count += _putchar(num / exp + '0');
		num %= exp;
		exp /= 10;
	}
	return (count);
}
