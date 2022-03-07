//
// Created by weibin on 2022-01-26.
//

#include <stdio.h>
#include <string.h>

int main() {
    char *str = "I love FishC.com";
    int i, length;

    length = strlen(str);

//    for (i = 0; i < length; ++i) {
//        printf("%c", str[i]);
//    }

    // 或者这样循环访问
    for (int j = 0; j < length; ++j) {
        printf("%c", *(str + j));
    }

    printf("\n");

    return 0;
}
