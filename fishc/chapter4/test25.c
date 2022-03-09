//
// Created by weibin on 2022-03-07.
//

# include <stdio.h>

int main() {
    int array[3][4] = {
            {0, 1, 2,  3},
            {4, 5, 6,  7},
            {8, 9, 10, 11}};

    int (*p)[4];
    p = array;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%2d", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}

