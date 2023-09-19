#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>


int _putchar(char str);
int printString(char *str);
int printInt(int n);
int print_binary(int n);
void print_number(long int n);
int number_nums(int n);
int print_reverse(char *str);
char rot13(char c);
int printROT13(char *str);
int print_address(void *ptr);

int _printf(const char *format, ...);



#endif

