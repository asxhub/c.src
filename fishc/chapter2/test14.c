//
// Created by weibin on 2022-01-12.
//

#include "stdio.h"

int main() {
    int i = 1, sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }

    printf("sum 结果为: %d \n", sum);

    return 0;
}

