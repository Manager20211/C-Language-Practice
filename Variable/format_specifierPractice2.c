/*
练习 2 要求：

short s = 100;

unsigned short us = 200;

size_t z = sizeof(int);

用正确格式符输出它们。

*/
#include <stdio.h>

int main(void){

    short s = 100;
    unsigned short us = 200;
    size_t z = sizeof(int);

    printf("s = %hd\n", s);
    printf("us = %hu\n", us);     //hhu你赢了
    printf("z = %zu\n", z);

    return 0;



}


/*
孩子，你又忘了在printf里面加\n了

*/