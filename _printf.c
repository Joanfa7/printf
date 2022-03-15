#include "main.h"

/**
 * _printf - prints characters of numbers
 * @format: string
 * Return: success
 */

int _printf(const char *format, ...)
{
	unsigned int idx = 0;
	unsigned int conteo = 0;
	va_list args;


	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[idx] != '\0')
	{
		if (format[idx] == '%' && format[idx + 1] != '\0')
		{
			conteo += get_specifier(format[idx + 1], &args);
			idx++;
		}
		else
		{
			if (format[idx] == '%')
				return (-1);
			_putchar(format[idx]);
			conteo++;
		}
		idx++;
	}
	va_end(args);
	return (conteo);
}
