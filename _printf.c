#include "main.h"
/**
 * _printf - function that prints a variable number of arguments
 * @format: a pointer to character
 * @...: ellipsis
 * Return: an integer (the number of printed arguments)
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list args;
	int (*f)(va_list);

	i = 0;
	count = 0;

	va_start (args, format);

	if (format == NULL)
	{
		return (-1);
	}
	format[i] = va_arg(args, int);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] = 'c' || format[i + 1] = 's' || format[i + 1] = '%' || format[i + 1] = 'd' || format[i + 1] = 'i')
				f = get_func(const char format[i + 1];
						count ++;
			}
		}
		i++;
		va_end(args);
	}
	return (count);
}
