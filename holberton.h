#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Libraries allowed*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct kings - Structure to printf
 * @modifier: To know as print in printf
 * @f: Share functions
 *
 * Descriptions: Structure to define what is the print preformated
 */

typedef struct kings
{
	char modifier;
	int (*f)(va_list);
} kind;

/*Prototypes*/
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int only_char(va_list list);
int print_string(va_list list);
int c_decimal(va_list list);
int print_int(int n);
int print_unint(unsigned int n);
int print_uns(va_list list);
int print_decimal(va_list list);
int print_perc(void);

#endif/*HOLBERTON_H*/
