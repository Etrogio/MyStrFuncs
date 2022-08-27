#include "MyString.h"

size_t SizeofCharArray(char* a)
{
    size_t len = sizeof(a)/sizeof(a[0]);
    return len;
}

size_t mystrlen(char* str)
{
    size_t len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    return len;
}

char* mystrcpy(char* dest, char* src, size_t num)
{
    size_t SizeofDest = SizeofCharArray(dest);
    for (size_t i = 0; i < num; i++)
    {
        if (src[i] == '\0')
        {
            dest[i] = '\0';
            break;
        }
        if ((SizeofDest < num) && (i == SizeofDest))
        {
            dest[i] = '\0';
            break;
        }
        dest[i] = src[i];
    }
    return dest;
}
