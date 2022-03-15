#include "main.h"

/**
 * get_char-
 * @args: variadic list
 * Return: success
 */

int get_char(va_list *args)
{
	return(_putchar(va_arg(*args, int)));
}


/**
 * get_string- 
 * @args: 
 * Return: success
 */

int get_string(va_list *args)
{
	return (StringPrinter(va_arg(*args, char *)));
}


/**
 * get_percet- 
 * @args:
 * @Return: success
 */

int get_percent(va_list *args)
{
	(void) args;

	_putchar('%');
	return (1);
}

/**
 * get_int- 
 * @args:
 * Return: success
 */
int get_int(va_list *args)
{
	return (IntegerPrinter(va_arg(*args, int)));
}
