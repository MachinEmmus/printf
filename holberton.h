#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Libraries allowed*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*Macros*/
#define True (1 == 1)
#define False !True

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
	void (*f)(va_list);
} kind;

/*Prototypes*/
int _printf(const char *format, ...);

#endif/*HOLBERTON_H*/
