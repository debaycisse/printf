#include "main.h"
#include <unistd.h>

/**
 * write_char - prints character to the console or screen
 * @ch: the character to be printed
 * @count: the total number of processed characters
 * Return: the value of the @count
 */
int write_char(char ch, int *count)
{
	*count += (int) write(1, &ch, 1);
	return (*count);
}
