//
// Created by weibin on 2022-03-07.
//

#include <stdio.h>

int main() {
    int array[2][3] = {
            {0, 1, 2},
            {3, 4, 5}
    };
    int (*p)[3] = array;

    printf("**p: %d \n", **p);
    printf("**array: %d \n", **array);
    printf("*(*p+1): %d \n", *(*p + 0));
    printf("**(p+1): %d \n", **(p + 1));
    printf("**(array+1): %d \n", **(array + 1));
    printf("array[1][0]: %d \n", array[1][0]);

    return 0;
}



