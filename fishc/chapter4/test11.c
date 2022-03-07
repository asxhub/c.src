//
// Created by weibin on 2022-03-07.
//


#include "stdio.h"

int main() {
    int temp[5] = {1, 2, 3, 4, 5};
    int (*p2)[5] = &temp;

    for (int j = 0; j < 5; ++j) {
        printf("%d \n", *(*p2 + j));
    }

    return 0;
}
