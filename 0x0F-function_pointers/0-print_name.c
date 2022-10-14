#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints any name entered
 * @name: name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
