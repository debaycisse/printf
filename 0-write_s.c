#include "main.h"
#include <unistd.h>

/**
 * write_string - prints set of characters to the console or screen
 * @str: the string to be printed
 */
void write_string(char *str, int *buffer_id)
{
	while (*str != '\0')
	{
		get_buffer(*str, buffer_id);
		str++;
	}
}
