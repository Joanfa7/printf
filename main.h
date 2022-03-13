#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

int _printf(const char *format, ...);

typedef struct convert
{
	char *spec;
	int (*f)(va_list);
}find_specifier;
#endif
