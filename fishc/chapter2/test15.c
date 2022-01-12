//
// Created by weibin on 2022-01-12.
//

#include "stdio.h"

int main() {
    int count = 0;

    printf("请输入一个英文句子：");

    while (getchar() != '\n') {
        count += 1;
    }

    printf("你总共输入了 %d 个字符 \n", count);

    return 0;
}


