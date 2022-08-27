#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED

#include <stdlib.h>

/*!
    This function returns length of array.
*/
size_t SizeofCharArray(char* a);

/*!
    This function returns length of string.
*/
size_t mystrlen(char* str);


/*!
    This function copies one string to other string.
*/
char* mystrcpy(char* dest, char* src, size_t num);


#endif // MYSTRING_H_INCLUDED
