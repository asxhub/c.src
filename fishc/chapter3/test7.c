//
// Created by weibin on 2022-03-09.
//


#include <string.h>
#include <stdio.h>

int main() {
    char str1[10] = "陶渊明1";
    char str2[20] = "Fishc.com";
    int d = strcmp(str1, str2);
    printf("结果为 %d \n", d);

    return 0;
}

