//
// Created by weibin on 2022-03-09.
//

#include "stdio.h"


int main() {
    int a = 111;
    int b = 222;
    int c = 333;
    int d = 444;
    int e = 555;
    int f = 666;
    int *cBooks[] = {
            &a,
            &b,
            &c,
            &d,
            &e,
            &f,
    };

    int **byFishC;
    int **jiayuLoves[4];

    byFishC = &cBooks[5];
    jiayuLoves[0] = &cBooks[0];
    jiayuLoves[1] = &cBooks[1];
    jiayuLoves[2] = &cBooks[2];
    jiayuLoves[3] = &cBooks[3];

    printf("%d \n", **byFishC);
}






