#ifndef MAIN_H
#define MAIN_H

/**
 * struct func - structure to match character with function
 *
 * @format: the format to match up, such as c for character
 * @f: the specific function fo each format character
 */
typedef struct func
{
	char format;
	void (*f)(char ch);
	void *type;
} func_t;

int _printf(const char *format, ...);
void write_char(char ch);


#endif
