#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct {
	char *p;
	int (*f)()(va_list args);
} 



void put_char(va_list args);
int _printf(const char *format, ...);
char *print_string (va_list args);
void print_percentage();
int print_integer (va_list args);


#endif
