#include "main.h"
#include <unistd.h>

/**
 * write_string - prints set of characters to the console or screen
 * @str: the string to be printed
 */
void write_string(char *str)
{
	while (*str != '\0')
	{
		write_char(*str);
		str++;
	}
}
