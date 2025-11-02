#ifndef STRING_H
#define STRING_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

size_t strlen(const char *ptr);
size_t strnlen(const char *str, size_t max);
char* strcpy(char *dest, const char *source);
bool isdigit(char c);
int tonumericdigit(char c);

#endif