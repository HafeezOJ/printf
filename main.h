#ifndef main_h_
#define main_h_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ev_print_func(const char *s, int index);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int _printf(const char *format, ...);

#endif
