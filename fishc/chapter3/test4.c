//
// Created by weibin on 2022-01-13.
//

#include "stdio.h"
#include "string.h"

int main() {
    char str1[] = "12";
    char str2[] = "993456789xxxxx33333333333333333333333333333";

    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);
    printf("-------- 开始前 ------- \n");

    strncpy(str1, str2, 3);
    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);

    return 0;
}




/**

    strcpy(str1, str2);
    printf("str3: %s \n", str3);
    strcpy(str3, str1);
    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);
    printf("str3: %s \n", str3);


*/