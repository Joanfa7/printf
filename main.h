#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* task 0: function that produces output according to a format */
int _printf(const char *format, ...);
/*definition*/
int get_specifier(char c, va_list *args);


/*definition*/
int get_int(va_list *);
/* definition */
int get_string(va_list *);
/*definition*/
int get_char(va_list *);
/*definition*/
int get_percent(va_list *args);


/*definition*/
int StringPrinter(char *);
/*definition*/
int IntegerPrinter(int);
/*definition*/
int _putchar(char c);


/*
 * struct specifier- get the specifier
 * @specifier: functions
 * @f: pointer to va_list
 */

typedef struct specifier
{
	char letter;
	int (*f)(va_list *);
} find_specifier;


#endif
