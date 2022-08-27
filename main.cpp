#include <stdio.h>
#include <stdlib.h>
#include <TXLib.h>
#include "MyString.h"

int main()
{
    char strcp[10] = "12345";
    char strdes[15] = " ";
    mystrcpy(strdes, strcp);
    printf("%s", strdes);
    return 0;
}
