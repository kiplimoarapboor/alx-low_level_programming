/**
 * print_name- prints a name
 *
 * @name: the name to be printed
 * @f: the printer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}

