//
// Created by weibin on 2022-03-09.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "I love ";
    char str2[] = "FishC.com!";
    strcat(str1, "");
    strcat(str1, str2);

    printf("str1:%s \n", str1);
    return 0;
}



