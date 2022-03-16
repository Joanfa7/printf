#include "main.h"

/**
 * _putchar- print char
 * @c: char
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * StringPrinter- prints a string
 * @string: string
 * Return: succes
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

/**
 * IntegerPrinter- prints integer
 * @number: integer
 * Return: cnt
 */

int IntegerPrinter(int number)
{
	int cnt = 1;
	unsigned int i;

	if (number < 0)
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
