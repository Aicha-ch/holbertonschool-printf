#include "main.h"
/**
 * put_char - is a function that puts a character
 * @c: input character
 * Return: void
 */
void put_char(va_list args)
{
	write(STDOUT_FILENO, &(va_arg(args, int)), 1);
}

/**
 * print_string - is a function that prints a string
 * @str: pointer to charcter
 * @size: the size of the given string
 * Return: 0 (Success)
 */
char *print_string (va_list args)
{
	unsigned int i;
	char *str;
	
	str = va_arg(args, char*)

	for (i = 0; str[i] != '\0'; i++)
	{
		put_char(str[i]);
	}
	return (str);
}

/**
 * print_percentage - is a function that puts %
 *
 * Return: void
 */
void print_percentage()
{
	write(1, "%", 1);
}

/**
 * print_integer - is a function that print integer
 * @args: arguments
 * Return: count
 */

int print_integer (va_list args)
{
	long int n = va_arg(args, int);
	long int i = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return(1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		count++;
	}
	for (i = 10; i <= n; i *= 10)
	{
		_putchar (((n / i) % 10) + '0');
		count++;
	}
	return (count);
}

