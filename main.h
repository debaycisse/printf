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
 * @f_str: function to handle string's string format
 * @f_percentage: function to handle percentage sign
 * @f_int: function to handle integer's & decimal's string format
 * @f_ptr: function to handle pointer's string format
 * @f_octa: function to handle octa's (base 8) string format
 * @f_unsigned_int: function to handle unsigned integer's string format
 * @f_hex: function to handle hexadecimal's string format in small letter
 * @f_HEX: function to handle HEXADECIMAL's string format in capital letter
 * @f_binary: function to handle binary conversion, using %b formart string
 */
typedef struct func
{
	char format;
	int (*f_char)(char, counter *);
	void (*f_str)(char *, counter *);
	void (*f_percentage)(char, counter *);
	void (*f_int)(int, counter *);
	void (*f_ptr)(void *, counter *);
	void (*f_octa)(int, counter *);
	void (*f_unsigned_int)(unsigned int, counter *);
	void (*f_hex)(void *, counter *);
	void (*f_HEX)(void *, counter *);
	void (*f_binary)(unsigned int, counter *);
} func_t;

counter create_count(int num);
void incr_count(counter *name);
int get_count(counter *name);
void incr_count(counter *name);
int _printf(const char *format, ...);
int write_char(char ch, counter *count_name);
void write_string(char *str, counter *count_name);
void write_p(char ch, counter *count_name);
int _putchar(char ch);
void percent_symbol(char ch, counter *count_name, va_list v_parameters);
void backslash_symbol(char ch, counter *count_name);
void write_int(int num, counter *count_name);
void write_b(unsigned int num, counter *count_name);

#endif
