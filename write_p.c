#include <ctype.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void write_ptr(void *ptr)
{
	char *ptr_char;

	ptr_char = (char *) ptr;
	while (*ptr_char  != '\0')
	{
		if (isdigit((int) *ptr_char))
			putchar(*ptr_char);
		else if (isalpha(*ptr_char))
			putchar(*ptr_char);
		ptr_char++;
	}
}
