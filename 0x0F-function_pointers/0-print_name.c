/**
 * print_name - A function to print a name
 * @name: A pointer to name to print
 * @f: a pointer to function that prints name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	f(name);
	}
}
