#include "main.h"
#include <unistd.h>

/**
 * write_string - prints set of characters to the console or screen
 * @str: the string to be printed
 * @count: the total number of character processed
 */
void write_string(char *str, int *count)
{
	while (*str != '\0')
	{
		write_char(*str, count);
		str++;
	}
}
