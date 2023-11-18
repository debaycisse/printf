#include <unistd.h>
#include "main.h"

/**
 * write_p - writes percentage symbol
 * @ch: the percentage character to be written
 * @count: the total number of character processed
 */
void write_p(char ch, int *count)
{
	write_char(ch, count);
}
