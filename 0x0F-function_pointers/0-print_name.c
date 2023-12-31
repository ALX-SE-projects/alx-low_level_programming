#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string to print
 * @f: ptr to callback function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
