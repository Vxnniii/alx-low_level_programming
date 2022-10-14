#include <stdlib.h>
#include "function_pointers.h"

/**
 * Print_name : Prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
	f(name);
}
