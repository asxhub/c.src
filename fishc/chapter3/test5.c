//
// Created by weibin on 2022-01-13.
//

#include "stdio.h"
#include "string.h"

int main() {
    char str1[] = "TO be or not to be";
    char str2[40];
    strncpy(str2, str1, 5);
    str2[5] = '\0';
    printf("%s\n", str2);
    return 0;
}




