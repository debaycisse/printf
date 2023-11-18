#include <stdarg.h>
#include "main.h"

/**
 * backslash_symbol - handles backslash sign character formatting
 * @ch: character to use for determining the character handling
 * @count: to store the number of processed characters
 */
void backslash_symbol(char ch, counter *count)
{
	switch (ch)
	{
		case 't':
			write_char('\t', count);
			break;
		case 'n':
			write_char('\n', count);
			break;
		case '\\':
			write_char('\\', count);
			break;
		case 'r':
			write_char('\r', count);
			break;
		case 'v':
			write_char('\v', count);
			break;
		case 'f':
			write_char('\f', count);
			break;
		case 'b':
			write_char('\b', count);
			break;
		case 'a':
			write_char('\a', count);
			break;
		case '%':
			write_char('%', count);
			break;
		default:
			break;
	}
}
