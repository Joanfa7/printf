#include "main.h"

/**
 * get_char- sends char to _putchar
 * @args: argument/ value
 * Return: success
 */

int get_char(va_list *args)
{
	return (_putchar(va_arg(*args, int)));
}


/**
 * get_string- send string to StringPrinter
 * @args: argument/ value
 * Return: success
 */

int get_string(va_list *args)
{
	return (StringPrinter(va_arg(*args, char *)));
}


/**
 * get_percent- if '%' print and return error
 * @args: argument/ value
 * Return: error
 */

int get_percent(va_list *args)
{
	(void) args;

	_putchar('%');
	return (1);
}

/**
 * get_int- send integer to IntegerPinter
 * @args: argument/ value
 * Return: success
 */

int get_int(va_list *args)
{
	return (IntegerPrinter(va_arg(*args, int)));
}
