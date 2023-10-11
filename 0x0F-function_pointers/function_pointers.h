#ifndef HEAD
#define HEAD
void _putchar(int c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
