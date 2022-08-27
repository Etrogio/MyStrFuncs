#include "MyString.h"

size_t mystrlen(char* str)
{
    size_t len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    return len;
}

char* mystrcpy(char* dest, char* src)
{
    for (size_t i = 0; i < mystrlen(src); i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
