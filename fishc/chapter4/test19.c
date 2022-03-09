//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;

    pv = pi;
    printf("pi:%p,pv:%p \n", pi, pv);
    printf("*pv:%d \n", *(int *) pv);

    pv = ps;
    printf("ps:%p, pv:%p \n", ps, pv);

    // 强制类型转换

    printf("*pv:%p \n", (int *) pv);

    return 0;
}

