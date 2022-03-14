#include "main.h"

/**
 * _printf - 
 * @x: integers
* @conteo: counts specifiers
 * Return:
 */

int _printf(const char *format, ...)
{
	int x = 0, conteo = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[x])
	{
		while (format[x] != '%' && format[x])
		{
			_putchar(format[x]);
			conteo++;
			x++;
		}
		if (!format[x])
			return (conteo);
		f = get_specifier(&format[x + 1]);
		if (f != NULL)
		{
			conteo += f(args);
			x += 2;
			continiue;
		}
		if (!format[x + 1])
			return (-1);
		_putchar(format[x];
				conteo++;
				if (format[x + 1] == '%')
				x += 2;
				else
				x++;
				}
				va_end(args);
				return (conteo);
				}




