//
// Created by weibin on 2022-01-12.
//

#include "stdio.h"


int main() {
    char ch;

    printf("请输入成绩：");
    scanf("%c", &ch);

    switch (ch) {
        case 'A':
            printf("牛逼...\n");
            break;
        default:
            printf("分数太低了...\n");
    }

    return 0;

}



