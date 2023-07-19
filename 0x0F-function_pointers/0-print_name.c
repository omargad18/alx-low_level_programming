#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: string name
 * @f: function pointer print
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
