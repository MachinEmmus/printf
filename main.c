#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/*unsigned int ui;
	void *addr;*/

 	printf("%   s\n", "Hola");
	_printf("%   s\n", "Hola");
	len = printf("String: Holberton && 100%y emmus\n");
	len2 = _printf("String: Holberton && 100%y emmus\n");
	
	printf("%c%s", 'L', "C y S juntos\n");
	_printf("%c%s", 'L', "C y S juntos\n");
	printf("NULL \n");
	_printf("NULL \n");
	printf("'\0'\n");
	_printf("'\0'\n");

	/*ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    /* _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);*/
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    /*_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
	printf("%d\n",len);
	printf("%d\n",len2);
    return (0);
}
