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




int _printf(const char *format, ...);



#endif
