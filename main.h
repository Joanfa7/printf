#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/* _putchar  */
int _putchar(char c);

/* task 0: function that produces output according to a format */
int _printf(const char *format, ...);


typedef struct convert
{
	char *spec;
	int (*f)(va_list);
}find_specifier;
#endif
