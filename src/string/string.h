#ifndef STRING_H
#define STRING_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

size_t strlen(const char *ptr);
size_t strnlen(const char *str, size_t max);
int strnlen_terminator(const char *str, size_t max, char terminator);
char* strcpy(char *dest, const char *source);
int istrncmp(const char *s1, const char *s2, size_t size);
int strncmp(const char *s1, const char *s2, size_t size);
bool isdigit(char c);
int tonumericdigit(char c);

#endif