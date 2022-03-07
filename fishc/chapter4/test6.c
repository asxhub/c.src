//
// Created by weibin on 2022-03-06.
//

#include "stdio.h"

int main() {
    int b[5] = {1, 2, 3, 4, 5};
    int *p = b;

    printf("p->%p, p+1 -> %p,p+2 -> %p \n", p, p + 1, p + 2);
    printf("p:%d,*(p+1):%d,*(p+2):%d \n", *p, *(p + 1), *(p + 2));
    printf("b:%d,*(b+1):%d,*(b+2):%d \n", *b, *(b + 1),
           *(b + 2));
    return 0;
}
