# **`_printf`**

![331125_630361](https://user-images.githubusercontent.com/124582867/229380110-7673c718-e712-4ac6-aa56-c816d5535188.png)

## FLOWCHART
![Flowchart]

## Description
_printf is a function that stands fot "print formatted".
It prints a string to the standard output, according to a given format.
Returns the number of characters in the output string on success, -1 otherwise.

### Prototype

int _printf(const char *format, ...);

### Format specifiers

| **Specifier** | **Output**                    |
| ------------- | ----------------------------- |
| %c            | print a single character     |
| %s            | print a string of characters |
| %%            | print a single percent sign  |
| %d            | print a decimal number       |
| %i            | print an integer             |


## Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
 - Write a function that produces output according to a format.
 - handle the following conversion specifiers: c, s, and %.
1. Education is when you read the fine print. Experience is what you get if you don't
 - Handle the following conversion specifiers: i, and d.
2. Just because it's in print doesn't mean it's the gospel
 - Create a man page for your function.

## Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Compilation

Our was compiled using this command:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Betty style

The style code of our function was checked using:
betty-style.pl and betty-doc.pl
## FLOWCHART
![Flowchart](https://github.com/Aicha-ch/holbertonschool-printf/blob/master/flow%20chart%20_printf.drawio.png)
## Author
* [**Aicha CHOUIKHI**](https://github.com/Aicha-ch)
