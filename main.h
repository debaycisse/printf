#ifndef MAIN_H
#define MAIN_H

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
	void (*f_char)(char);
	void (*f_str)(char *);
	void (*f_int)(int);
	void (*f_float)(float);
} func_t;


int _printf(const char *format, ...);
int write_char(char ch);
void write_string(char *str);
int write_p(char ch);
int _putchar(char ch);

#endif
