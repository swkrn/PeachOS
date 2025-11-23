#include "string.h"

char tolower(char c)
{
    if (c >= 65 && c <= 90)
    {
        c += 32;
    }
    return c;
}

size_t strlen(const char *str)
{
    size_t len = 0;
    while (str[len])
    {
        len++;
    }
    return len;
}

size_t strnlen(const char *str, size_t max)
{
    size_t len = 0;
    while (str[len++])
    {
        if (len == max)
            return max;
    };
    return len;
}

int strnlen_terminator(const char *str, size_t max, char terminator)
{
    size_t len = 0;
    for (; len < max; len++)
    {
        if (!str[len])
            return len;

        if (str[len] == terminator)
            return len;
    }
    return len;
}

int istrncmp(const char *s1, const char *s2, size_t size)
{
    while (size--)
    {
        unsigned char c1 = *s1++;
        unsigned char c2 = *s2++;
        if (c1 != c2 && tolower(c1) != tolower(c2))
            return c1 - c2;

        if (c1 == '\0')
            return 0;
    }
    return 0;
}

int strncmp(const char *s1, const char *s2, size_t size)
{
    while (size--)
    {
        unsigned char c1 = *s1++;
        unsigned char c2 = *s2++;
        if (c1 != c2)
            return c1 - c2;

        if (c1 == '\0')
            return 0;
    }
    return 0;
}

char* strcpy(char *dest, const char *source)
{
    char *res = dest;
    while (*source != 0)
    {
        *dest++ = *source++;
    }
    *dest = '\0';
    return res;
}

bool isdigit(char c)
{
    return c >= 48 && c <= 57;
}

int tonumericdigit(char c)
{
    return c - 48;
}