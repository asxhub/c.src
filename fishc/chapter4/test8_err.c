//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    char str[] = "I love FishC.com";
    int count = 0;

    while (*str++ != '\0') {
        count++;
    }

    printf("总共有%d个字符\n", count);

    return 0;
}
