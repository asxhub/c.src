//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    int num = 520;
    int *p = &num;
    int **pp = &p;


    printf("num: %d", num);
    printf("*p:%d \n", *p);
    printf("**p: %d \n", **pp);
    printf("&p: %p , pp: %p \n", &p, pp);
    printf("&num: %p,p:%p,*pp:%p \n", &num, p, *pp);

    return 0;
}