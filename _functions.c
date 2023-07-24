#include "main.h"
/**
 * _putchar - is a function that puts a charachter
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
char *print_string (char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		put_char(str[i]);
	}
	return (str);
}
