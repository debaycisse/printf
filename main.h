#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct func - structure to match character with function
 *
 * @format: the format to match up, such as c for character
 * @f_char: function to handle character format
 * @f_str: function to handle string format
 * @f_int: function to handle integer & decimal base 10 format
 * @f_float: function to handle float format
 */
typedef struct func
{
	char format;
	int (*f_char)(char, int *);
	void (*f_str)(char *, int *);
	void (*f_percentage)(char, int *);
	void (*f_int)(int, int *);
	void (*f_ptr)(void *, int *);
	void (*f_octa)(int, int *);
	void (*f_unsigned)(unsigned int, int *);
	void (*f_hex)(void *, int *);
	void (*f_HEX)(void *, int *);
} func_t;


int _printf(const char *format, ...);
int write_char(char ch, int *count);
void write_string(char *str, int *count);
void write_p(char ch, int *count);
int _putchar(char ch);
void percent_symbol(char ch, int *count, va_list v_parameters);
void backslash_symbol(char ch, int *count);

#endif
