//
// Created by weibin on 2022-03-01.
//

#include <stdio.h>

int main(void) {
    char a[6] = {'F', 'i', 's', 'h', 'C', '\0'}; // 需要主动加上 \0
    char a1[] = {'F', 'i', 's', 'h', 'C', '\0'}; // 需要主动加上 \0
    char a2[] = {"FishC"};
    char a3[] = "FishC";

    printf("a: %s \n", a);
    printf("a1: %s \n", a1);
    printf("a2: %s \n", a2);
    printf("a3: %s \n", a3);

    return 0;
}

