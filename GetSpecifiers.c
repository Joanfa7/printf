#include "main.h"

/**
 * get_specifier - function that produces output according to a format.
 * @f: format
 */

int get_specifier(char c, va_list *args)
{
	int i = 0;

	find_specifier specifier[] =
	{
		{'c', get_char},
		{'s', get_string},
		{'%', get_percent},
		{'d', get_int},
		{'i', get_int},
		{'\0', NULL},
	};

		while (specifier[i].letter != '\0')
		{
			if (specifier[i].letter == c)
			{
				return (specifier[i].f(args));
			}
		i++;
		}
		_putchar('%');
		_putchar(c);
		return (2);
}
