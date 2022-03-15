#include "main.h"

/**
 *
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 *
 *
 */

int StringPrinter(char *string)
{
	unsigned int idx;

	if (string == NULL)
	{
		string = "(null)";
	}

	for (idx = 0; string[idx] != '\0'; idx++)
	{
		_putchar(string[idx]);
	}
	return (idx);
}


int IntegerPrinter(int number)
{
	int cnt = 1;
	unsigned int i;

	if( number < 0)
	{
		_putchar('-');
		cnt++;
		number = -number;
	}

	i = number;

	if (i > 9)
	{
		cnt += IntegerPrinter(i / 10);
	}
	_putchar(i % 10 + '0');
	return (cnt);

}
