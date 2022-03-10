//
// Created by weibin on 2022-03-09.
//

#include "stdio.h"


int main() {
    char *cBooks[] = {
            "c程序设计语言",
            "c专家编程",
            "c和指针",
            "c陷进与缺陷",
            "C Primer puls",
            "带你学c带你飞",
    };

    char **byFishC;
    char **jiayuLoves[4];

    byFishC = &cBooks[5];
    jiayuLoves[0] = &cBooks[0];
    jiayuLoves[1] = &cBooks[1];
    jiayuLoves[2] = &cBooks[2];
    jiayuLoves[3] = &cBooks[3];

    printf("%s \n", *byFishC);
}






