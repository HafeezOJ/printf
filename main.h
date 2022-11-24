#ifndef main_h_
#define main_h_

#include <unistd.h>
#include <stdargs.h>
#include <stdlib.h>

unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);`
int _printf(const char *format, ...);

#endif
