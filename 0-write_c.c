#include "main.h"
#include <unistd.h>

/**
 * write_char - prints character to the console or screen
 * @ch: the character to be printed
 * Return: the value of the write function
 */
int write_char(char ch, int *buffer_id)
{
	return (get_buffer(ch, buffer_id));
}
