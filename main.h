#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _write_char(char c);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_number(va_list params);
char *rev_string(char *s);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_interger(va_list list);
int unsigned_integer(va_list list);

#endif /* MAIN_H */
