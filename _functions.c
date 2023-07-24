#include "main.h"
/**
 * put_char - is a function that puts a charachter
 * @c: input character
 * Return: void
 */
void put_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
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
