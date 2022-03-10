//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>


int main() {
    int num = 520;
    const int cnum = 880;
    const int *const p = &num;

//    printf("*p: %d \n", *p);
//    num = 1024;
//    printf("*p:%d \n", *p);


    *p = 1024;
    printf("*p: %d \n", *p);

    p = &cnum;
    printf("*p: %d \n", *p);


    return 0;
}

