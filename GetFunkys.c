#include "main.h"

/**
 * get_specifier - function that produces output according to a format.
 * @f: format
 */

int (*get_specifier(char *format)
	
	unsigned int i = 0;
	
	find_specifier specifier[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_persent},
		{"d", func_digits},
		{"i", func_int},
		{NULL, NULL},
};

while (specifier[i]. != NULL)
{
	if (*(specifier[i].spec) == *format)
	{
		return (specifier[i].f);
		i++;
	}
	return (NULL);
}
