#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct count - maintains number of processed characters
 * @count: the actual number of processed character(s)
 */
typedef struct count
{
	int count;
} counter;

/**
 * struct func - structure to match character with function
 *
 * @format: the format to match up, such as c for character
 * @f_char: function to handle character's string format
 * @f_non_prt: function to handle string and non-printables. %S format string
 */
typedef struct func
{
	char format;
	int (*f_char)(char, counter *);
	void (*f_non_prt)(char *, counter *);
} func_t;

counter create_count(int num);
void incr_count(counter *name);
int get_count(counter *name);
void incr_count(counter *name);
int _printf(const char *format, ...);
int write_char(char ch, counter *count_name);
int _putchar(char ch);
void percent_symbol(char ch, counter *count_name, va_list v_parameters);
void backslash_symbol(char ch, counter *count_name);
char switch_num_small(int num);
char switch_num_capital(int num);
void write_S(char *str, counter *count_name);

#endif
