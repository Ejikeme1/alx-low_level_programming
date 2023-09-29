#ifndef MAIN_H
#define MAIN_H

int_putchar(char c);

unsigned int binary_to_unit(const char *b);
void ppint_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
