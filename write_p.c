#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * write_ptr - handles pointers
 * @ptr: pointer to the memory address
 */
void write_ptr(void *ptr)
{
    long int ptr_int;
    long int size;
    long int ind;
    int pos_amt = 2;
    int each_char;
    char val_conv;
    int i;

    ptr_int = (long int) ptr;
    size = 8;
    ind = (pos_amt * size) - 1;
    i = 0;
    while (ind >= 0)
    {
		i++;
		each_char = (ptr_int >> (ind * sizeof(int))) & 0xf;
		if (each_char > 10)
			val_conv = 'a' + each_char - 10;
		if (each_char < 10)
			val_conv = '0' + each_char;
		if (i == 1)
			write_char('0');
		if (i == 2)
			write_char('x');
		if ((i < 4) && (val_conv != '0'))
			write_char(val_conv);
		if (i > 4)
			write_char(val_conv);
		ind--;
	}
}

