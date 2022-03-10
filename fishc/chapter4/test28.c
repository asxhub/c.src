//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;


    printf("cnum: %d, &cnum: %p \n", cnum, &cnum);
    printf("*pc: %d,pc:%p \n", *pc, pc);

    // 尝试修改 *pc 的值
//    *pc = 1024;

    pc = &num;
    num = 1024;
    *pc = 1111;

    printf("*pc: %d \n", *pc);

    return 0;
}


