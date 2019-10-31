#include "holberton.h"
/**
 * print_int - print an integer number
 * @n: number to print
 * Return: nothing
 */
int print_int(int n)
{
	int add, num, temp, numTmp, div, y = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			y++;
		}
		num = 0;
		temp = n;
		while (temp != 0)
		{
			temp = temp / 10;
			num++;
		}
		add = num;
		numTmp = n;
		while (add > 0)
		{
			for (div = add - 1; div > 0; div--)
			{
				numTmp = numTmp / 10;
			}
			numTmp = numTmp % 10;
			if (numTmp > 0)
				_putchar(numTmp + '0');
			else
				_putchar(-numTmp + '0');
			numTmp = n;
			add--;
		}
	}
	return (num + y);
}
