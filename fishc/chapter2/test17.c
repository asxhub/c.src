//
// Created by weibin on 2022-01-12.
//

#include "stdio.h"

int main() {
    int count;

    for (int i = 0; i < 100; ++i) {
        count += i;
    }

    printf("count: %d \n", count);
    return 0;
}
