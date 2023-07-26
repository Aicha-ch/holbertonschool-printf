#include "main.h"
/**
 * _putchar - puts a character
 * @c: input character
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}


/**
 * print_char - is a function that prints a character
 * @args: va_list variable contains the char to be printed
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}

/**
 * print_string - is a function that prints a string
 * @str: pointer to charcter
 * Return: 0 (Success)
 */
int print_string(va_list args)
{
	unsigned int i;
	char *str;
	
	str = va_arg(args, char*);
		
	if (str == NULL)
	{
		_putchar('\0');
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}

/**
 * print_percentage - prints a percentage sign
 * @args: argument list
 * Return: Always returns 1
 */
int print_percent(va_list args)
{
	(void)args;
	return write(1, "%", 1);
}

/**
 * print_dec - is a function that print integer
 * @args: arguments
 * Return: len the number of characters
 */

int print_dec (va_list args)
{
	int value;
	unsigned int abs, i, c = 1;
	int n = 0;

	value = va_arg(args, int);

	if (value < 0)
	{
		_putchar('-');
		n++;
		abs = value * (-1);
	}
	else
	{
		abs = value;
	}
	i = abs;
	while (i > 9)
	{
		i = i / 10;
		c = c * 10;
	}
	while (c >= 1)
	{
		_putchar(((abs / c) % 10) + '0');
		n++;
		c = c / 10;
	}
	return (n);
}
