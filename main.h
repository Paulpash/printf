#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @op: The operator
* @f: The function associated
*/
struct convert
{
	char *op;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _write_char(char c);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_number(va_list params);
char *rev_string(char *s);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int print_binary(va_list);
int print_unsgined_number(unsigned int n);
int unsigned_integer(va_list list);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int print_reversed(va_list arg);
int rot13(va_list list);

int hex_check(int, char);
int _puts(char *str);

#endif /* MAIN_H */
