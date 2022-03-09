//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = array;
    for (int i = 0; i < 10; ++i) {
        printf("%d \n", *(p + i));
    }

    printf("============== \n");

    for (int i = 0; i < 10; ++i) {
        printf("%d \n", array[i]);
    }

    return 0;
}


