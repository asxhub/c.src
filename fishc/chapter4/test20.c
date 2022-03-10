//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC去";
    void *pv;

    pv = pi;

    printf("pi:%p,pv:%p \n", pi, pv);
    printf("*pv:%d \n", *(int *) pv);

    pv = ps;

    printf("ps:%p, pv:%p \n", ps, pv);

    printf("*pv:%c \n", ps[0]);

    //
    char *s1 = pv;

    printf("pv:%s \n", (char *) pv);
    printf("s1:%s \n", s1);

    return 0;
}

