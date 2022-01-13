//
// Created by weibin on 2022-01-13.
//

#include "stdio.h"

#define NUM 10

int main() {
    int s[NUM];

    int i, sum = 0;
    for (int i = 0; i < NUM; ++i) {
        printf("请输入第%d个同学的成绩：", i + 1);
        scanf("%d", &s[i]);
        sum += s[i];
    }

    printf("成绩录入完毕，该次考试的平均分为: %.2f\n", (double) sum / NUM);
    return 0;
}






