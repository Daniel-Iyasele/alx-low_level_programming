#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
unsigned int power(unsigned int a, unsigned int b);
int check_string(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif /*main_h*/
