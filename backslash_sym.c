#include <stdarg.h>
#include "main.h"

/**
 * backslash_symbol - handles backslash sign character formatting
 * @ch: character to use for determining the character handling
 * @count: to store the number of processed characters
 */
void backslash_symbol(char ch, int *count)
{
	switch (ch)
	{
		case 't':
			_putchar('\t');
			(*count)++;
			break;
		case 'n':
			_putchar('\n');
			(*count)++;
			break;
		case '\\':
			_putchar('\\');
			(*count)++;
			break;
		case 'r':
			_putchar('\r');
			(*count)++;
			break;
		case 'v':
			_putchar('\v');
			(*count)++;
			break;
		case 'f':
			_putchar('\f');
			(*count)++;
			break;
		case 'b':
			_putchar('\b');
			(*count)++;
			break;
		case 'a':
			_putchar('\a');
			(*count)++;
			break;
		case '%':
			_putchar('%');
			(*count)++;
			break;
		default:
			break;
	}
}
