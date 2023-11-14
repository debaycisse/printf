#include "main.h"
#include <unistd.h>

/**
 * write_char - prints character to the console or screen
 * @ch: the character to be printed
 */
int write_char(char ch)
{
	return (write(1, &ch, 1));
}
