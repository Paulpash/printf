#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _write_char(char c);
int parser(const char *format, conver_t f_list[], va_list arg_list);

#endif /* MAIN_H */
