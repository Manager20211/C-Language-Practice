/*

练习 5 要求：

char a = 100;

char b = 100;

int c = a + b;

输出 c

用注释解释为什么结果不是溢出

*/

#include <stdio.h>

int main(void){

    char a = 100;
    char b = 100;
    int c = a + b;  //a和b已经在这一步被转化成了int，所以不会溢出

    printf("c为%d\n", c);

    return 0;


}